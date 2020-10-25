/*
 * The B-tree file node vector functions
 *
 * Copyright (C) 2009-2020, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <memory.h>
#include <types.h>

#include "libfshfs_btree_node.h"
#include "libfshfs_btree_node_vector.h"
#include "libfshfs_definitions.h"
#include "libfshfs_extent.h"
#include "libfshfs_fork_descriptor.h"
#include "libfshfs_io_handle.h"
#include "libfshfs_libcdata.h"
#include "libfshfs_libcerror.h"
#include "libfshfs_libcnotify.h"
#include "libfshfs_libfcache.h"
#include "libfshfs_unused.h"

/* Creates a B-tree node vector
 * Make sure the value node_vector is referencing, is set to NULL
 * Returns 1 if successful or -1 on error
 */
int libfshfs_btree_node_vector_initialize(
     libfshfs_btree_node_vector_t **node_vector,
     libfshfs_io_handle_t *io_handle,
     uint16_t node_size,
     libfshfs_fork_descriptor_t *fork_descriptor,
     libcerror_error_t **error )
{
	libfshfs_extent_t *extent        = NULL;
	static char *function            = "libfshfs_btree_node_vector_initialize";
	uint64_t total_number_of_blocks  = 0;
	uint32_t extent_block_number     = 0;
	uint32_t extent_number_of_blocks = 0;
	int entry_index                  = 0;
	int extent_index                 = 0;
	int result                       = 0;

	if( node_vector == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_INVALID_VALUE,
		 "%s: invalid B-tree node vector.",
		 function );

		return( -1 );
	}
	if( *node_vector != NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_VALUE_ALREADY_SET,
		 "%s: invalid B-tree node vector value already set.",
		 function );

		return( -1 );
	}
	if( io_handle == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_INVALID_VALUE,
		 "%s: invalid IO handle.",
		 function );

		return( -1 );
	}
	if( io_handle->block_size == 0 )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_VALUE_OUT_OF_BOUNDS,
		 "%s: invalid B-tree node vector - invalid IO handle - block size value out of bounds.",
		 function );

		return( -1 );
	}
	if( node_size == 0 )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_VALUE_OUT_OF_BOUNDS,
		 "%s: invalid node size value out of bounds.",
		 function );

		return( -1 );
	}
	if( fork_descriptor == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_INVALID_VALUE,
		 "%s: invalid fork descriptor.",
		 function );

		return( -1 );
	}
	*node_vector = memory_allocate_structure(
	                libfshfs_btree_node_vector_t );

	if( *node_vector == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_MEMORY,
		 LIBCERROR_MEMORY_ERROR_INSUFFICIENT,
		 "%s: unable to create B-tree node vector.",
		 function );

		goto on_error;
	}
	if( memory_set(
	     *node_vector,
	     0,
	     sizeof( libfshfs_btree_node_vector_t ) ) == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_MEMORY,
		 LIBCERROR_MEMORY_ERROR_SET_FAILED,
		 "%s: unable to clear B-tree node vector.",
		 function );

		memory_free(
		 *node_vector );

		*node_vector = NULL;

		return( -1 );
	}
	if( libcdata_array_initialize(
	     &( ( *node_vector )->extents ),
	     0,
	     error ) != 1 )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_INITIALIZE_FAILED,
		 "%s: unable to create extents array.",
		 function );

		goto on_error;
	}
	for( extent_index = 0;
	     extent_index < 8;
	     extent_index++ )
	{
		extent_block_number     = fork_descriptor->extents[ extent_index ][ 0 ];
		extent_number_of_blocks = fork_descriptor->extents[ extent_index ][ 1 ];

		if( ( extent_block_number == 0 )
		 || ( extent_number_of_blocks == 0 ) )
		{
			break;
		}
		if( libfshfs_extent_initialize(
		     &extent,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_INITIALIZE_FAILED,
			 "%s: unable to create extent.",
			 function );

			goto on_error;
		}
		extent->block_number     = extent_block_number;
		extent->number_of_blocks = extent_number_of_blocks;

		if( libcdata_array_append_entry(
		     ( *node_vector )->extents,
		     &entry_index,
		     (intptr_t *) extent,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_APPEND_FAILED,
			 "%s: unable to append extent to array.",
			 function );

			goto on_error;
		}
		extent = NULL;

		total_number_of_blocks += extent_number_of_blocks;
	}
	if( total_number_of_blocks > ( (uint64_t) UINT64_MAX / io_handle->block_size ) )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_VALUE_OUT_OF_BOUNDS,
		 "%s: invalid total number of blocks value out of bounds.",
		 function );

		return( -1 );
	}
	total_number_of_blocks *= io_handle->block_size;
	total_number_of_blocks /= node_size;

	if( total_number_of_blocks > (uint64_t) UINT32_MAX )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_VALUE_OUT_OF_BOUNDS,
		 "%s: invalid number of nodes value out of bounds.",
		 function );

		return( -1 );
	}
	( *node_vector )->number_of_nodes = (uint32_t) total_number_of_blocks;

	result = libfshfs_fork_descriptor_has_extents_overflow(
	          fork_descriptor,
	          error );

	if( result == -1 )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_GET_FAILED,
		 "%s: unable to determine if fork descriptor has extents overflow.",
		 function );

		goto on_error;
	}
	else if( result != 0 )
	{
/* TODO add extents overflow support */
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_UNSUPPORTED_VALUE,
		 "%s: fork descriptor with extents overflow not supported.",
		 function );

		goto on_error;
	}
	( *node_vector )->io_handle = io_handle;
	( *node_vector )->node_size = node_size;

	return( 1 );

on_error:
	if( *node_vector != NULL )
	{
		if( ( *node_vector )->extents != NULL )
		{
			libcdata_array_free(
			 &( ( *node_vector )->extents ),
			 (int (*)(intptr_t **, libcerror_error_t **)) &libfshfs_extent_free,
			 NULL );
		}
		memory_free(
		 *node_vector );

		*node_vector = NULL;
	}
	return( -1 );
}

/* Frees a B-tree node vector
 * Returns 1 if successful or -1 on error
 */
int libfshfs_btree_node_vector_free(
     libfshfs_btree_node_vector_t **node_vector,
     libcerror_error_t **error )
{
	static char *function = "libfshfs_btree_node_vector_free";
	int result            = 1;

	if( node_vector == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_INVALID_VALUE,
		 "%s: invalid B-tree node vector.",
		 function );

		return( -1 );
	}
	if( *node_vector != NULL )
	{
		if( libcdata_array_free(
		     &( ( *node_vector )->extents ),
		     (int (*)(intptr_t **, libcerror_error_t **)) &libfshfs_extent_free,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_FINALIZE_FAILED,
			 "%s: unable to free extents array.",
			 function );

			result = -1;
		}
		memory_free(
		 *node_vector );

		*node_vector = NULL;
	}
	return( result );
}

/* Retrieves a specific B-tree node
 * Returns 1 if successful or -1 on error
 */
int libfshfs_btree_node_vector_get_node_by_number(
     libfshfs_btree_node_vector_t *node_vector,
     libbfio_handle_t *file_io_handle,
     libfcache_cache_t *cache,
     uint32_t node_number,
     libfshfs_btree_node_t **node,
     int recursion_depth,
     libcerror_error_t **error )
{
	libfcache_cache_value_t *cache_value = NULL;
	libfshfs_btree_node_t *safe_node     = NULL;
	libfshfs_extent_t *extent            = NULL;
	static char *function                = "libfshfs_btree_node_vector_get_node_by_number";
	size64_t extent_size                 = 0;
	off64_t cache_value_offset           = 0;
	off64_t file_offset                  = 0;
	off64_t node_offset                  = 0;
	int64_t cache_value_timestamp        = 0;
	int cache_value_file_index           = 0;
	int extent_index                     = 0;
	int number_of_extents                = 0;
	int result                           = 0;

#if defined( HAVE_DEBUG_OUTPUT )
	const char *hit_or_miss              = NULL;
#endif

	if( node_vector == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_INVALID_VALUE,
		 "%s: invalid B-tree node vector.",
		 function );

		return( -1 );
	}
	if( node_vector->io_handle == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_VALUE_MISSING,
		 "%s: invalid B-tree node vector - missing IO handle.",
		 function );

		return( -1 );
	}
	if( node_vector->io_handle->block_size == 0 )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_VALUE_OUT_OF_BOUNDS,
		 "%s: invalid B-tree node vector - invalid IO handle - block size value out of bounds.",
		 function );

		return( -1 );
	}
	if( node_number >= node_vector->number_of_nodes )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_VALUE_OUT_OF_BOUNDS,
		 "%s: invalid block number value out of bounds.",
		 function );

		return( -1 );
	}
	if( libfcache_cache_get_value_by_index(
	     (libfcache_cache_t *) cache,
	     recursion_depth,
	     &cache_value,
	     error ) != 1 )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_GET_FAILED,
		 "%s: unable to retrieve value: %d from cache.",
		 function,
		 recursion_depth );

		goto on_error;
	}
	if( cache_value != NULL )
	{
		if( libfcache_cache_value_get_identifier(
		     cache_value,
		     &cache_value_file_index,
		     &cache_value_offset,
		     &cache_value_timestamp,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_GET_FAILED,
			 "%s: unable to retrieve cache value identifier.",
			 function );

			goto on_error;
		}
		if( (off64_t) node_number == cache_value_offset )
		{
			if( libfcache_cache_value_get_value(
			     cache_value,
			     (intptr_t **) node,
			     error ) != 1 )
			{
				libcerror_error_set(
				 error,
				 LIBCERROR_ERROR_DOMAIN_RUNTIME,
				 LIBCERROR_RUNTIME_ERROR_GET_FAILED,
				 "%s: unable to retrieve cache value.",
				 function );

				goto on_error;
			}
			result = 1;
		}
	}
#if defined( HAVE_DEBUG_OUTPUT )
	if( libcnotify_verbose != 0 )
	{
		if( result == 0 )
		{
			hit_or_miss = "miss";
		}
		else
		{
			hit_or_miss = "hit";
		}
		libcnotify_printf(
		 "%s: cache: 0x%08" PRIjx " %s\n",
		 function,
		 (intptr_t) cache,
		 hit_or_miss );
	}
#endif /* defined( HAVE_DEBUG_OUTPUT ) */

	if( result == 0 )
	{
		if( libfshfs_btree_node_initialize(
		     &safe_node,
		     (size_t) node_vector->node_size,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_INITIALIZE_FAILED,
			 "%s: unable to create B-tree node.",
			 function );

			goto on_error;
		}
		if( libcdata_array_get_number_of_entries(
		     node_vector->extents,
		     &number_of_extents,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_GET_FAILED,
			 "%s: unable to retrieve number of extents.",
			 function );

			goto on_error;
		}
		node_offset = (off64_t) node_number * node_vector->node_size;

		for( extent_index = 0;
		     extent_index < number_of_extents;
		     extent_index++ )
		{
			if( libcdata_array_get_entry_by_index(
			     node_vector->extents,
			     extent_index,
			     (intptr_t **) &extent,
			     error ) != 1 )
			{
				libcerror_error_set(
				 error,
				 LIBCERROR_ERROR_DOMAIN_RUNTIME,
				 LIBCERROR_RUNTIME_ERROR_GET_FAILED,
				 "%s: unable to retrieve extent: %d.",
				 function,
				 extent_index );

				goto on_error;
			}
			if( extent == NULL )
			{
				libcerror_error_set(
				 error,
				 LIBCERROR_ERROR_DOMAIN_RUNTIME,
				 LIBCERROR_RUNTIME_ERROR_VALUE_MISSING,
				 "%s: missing extent: %d.",
				 function,
				 extent_index );

				goto on_error;
			}
			extent_size = (size64_t) extent->number_of_blocks * node_vector->io_handle->block_size;

			if( (size64_t) node_offset < extent_size )
			{
				file_offset  = ( (off64_t) extent->block_number * node_vector->io_handle->block_size ) + node_offset;
				extent_size -= node_offset;

				break;
			}
			node_offset -= extent_size;
		}
		if( extent_size < node_vector->node_size )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_VALUE_OUT_OF_BOUNDS,
			 "%s: invalid extent size value out of bounds.",
			 function );

			goto on_error;
		}
		if( libfshfs_btree_node_read_file_io_handle(
		     safe_node,
		     file_io_handle,
		     file_offset,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_IO,
			 LIBCERROR_IO_ERROR_READ_FAILED,
			 "%s: unable to read element data at offset: %" PRIi64 " (0x%08" PRIx64 ").",
			 function,
			 file_offset,
			 file_offset );

			goto on_error;
		}
		if( libfcache_cache_set_value_by_index(
		     cache,
		     recursion_depth,
		     0,
		     (off64_t) node_number,
		     0,
		     (intptr_t *) safe_node,
		     (int (*)(intptr_t **, libcerror_error_t **)) &libfshfs_btree_node_free,
		     LIBFCACHE_CACHE_VALUE_FLAG_MANAGED,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_SET_FAILED,
			 "%s: unable to set value: %d in cache.",
			 function,
			 recursion_depth );

			goto on_error;
		}
		*node = safe_node;
	}
	return( 1 );

on_error:
	if( safe_node != NULL )
	{
		libfshfs_btree_node_free(
		 &safe_node,
		 NULL );
	}
	return( -1 );
}

