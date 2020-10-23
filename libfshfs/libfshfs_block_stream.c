/*
 * Block stream functions
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
#include <types.h>

#include "libfshfs_block_data_handle.h"
#include "libfshfs_extent.h"
#include "libfshfs_io_handle.h"
#include "libfshfs_libcdata.h"
#include "libfshfs_libcerror.h"
#include "libfshfs_libfdata.h"

/* Creates a block stream
 * Make sure the value block_stream is referencing, is set to NULL
 * Returns 1 if successful or -1 on error
 */
int libfshfs_block_stream_initialize(
     libfdata_stream_t **block_stream,
     libfshfs_io_handle_t *io_handle,
     size64_t data_size,
     libcdata_array_t *extents,
     libcerror_error_t **error )
{
	libfdata_stream_t *safe_data_stream = NULL;
	libfshfs_extent_t *extent           = NULL;
	static char *function               = "libfshfs_block_stream_initialize";
	size64_t segment_size               = 0;
	off64_t segment_offset              = 0;
	int extent_index                    = 0;
	int number_of_extents               = 0;
	int segment_index                   = 0;

	if( block_stream == NULL )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_ARGUMENTS,
		 LIBCERROR_ARGUMENT_ERROR_INVALID_VALUE,
		 "%s: invalid data stream.",
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
		 "%s: invalid IO handle - block size value out of bounds.",
		 function );

		return( -1 );
	}
	if( libcdata_array_get_number_of_entries(
	     extents,
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
	if( libfdata_stream_initialize(
	     &safe_data_stream,
	     NULL,
	     NULL,
	     NULL,
	     NULL,
	     (ssize_t (*)(intptr_t *, intptr_t *, int, int, uint8_t *, size_t, uint32_t, uint8_t, libcerror_error_t **)) &libfshfs_block_data_handle_read_segment_data,
	     NULL,
	     (off64_t (*)(intptr_t *, intptr_t *, int, int, off64_t, libcerror_error_t **)) &libfshfs_block_data_handle_seek_segment_offset,
	     0,
	     error ) != 1 )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_INITIALIZE_FAILED,
		 "%s: unable to create data stream.",
		 function );

		goto on_error;
	}
	for( extent_index = 0;
	     extent_index < number_of_extents;
	     extent_index++ )
	{
		if( libcdata_array_get_entry_by_index(
		     extents,
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
		if( extent->block_number == 0 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_VALUE_MISSING,
			 "%s: invalid extent: %d - missing block number.",
			 function,
			 extent_index );

			goto on_error;
		}
		if( extent->number_of_blocks == 0 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_VALUE_MISSING,
			 "%s: invalid extent: %d - missing number of blocks.",
			 function,
			 extent_index );

			goto on_error;
		}
		segment_offset = (off64_t) extent->block_number * io_handle->block_size;
		segment_size   = (size64_t) extent->number_of_blocks * io_handle->block_size;

		if( libfdata_stream_append_segment(
		     safe_data_stream,
		     &segment_index,
		     0,
		     segment_offset,
		     segment_size,
		     0,
		     error ) != 1 )
		{
			libcerror_error_set(
			 error,
			 LIBCERROR_ERROR_DOMAIN_RUNTIME,
			 LIBCERROR_RUNTIME_ERROR_APPEND_FAILED,
			 "%s: unable to append extent: %d data stream segment.",
			 function,
			 extent_index );

			goto on_error;
		}
	}
	if( libfdata_stream_set_mapped_size(
	     safe_data_stream,
	     data_size,
	     error ) != 1 )
	{
		libcerror_error_set(
		 error,
		 LIBCERROR_ERROR_DOMAIN_RUNTIME,
		 LIBCERROR_RUNTIME_ERROR_SET_FAILED,
		 "%s: unable to set mapped size of data stream.",
		 function );

		goto on_error;
	}
	*block_stream = safe_data_stream;

	return( 1 );

on_error:
	if( safe_data_stream != NULL )
	{
		libfdata_stream_free(
		 &safe_data_stream,
		 NULL );
	}
	return( -1 );
}

