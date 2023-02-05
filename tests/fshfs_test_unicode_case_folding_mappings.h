/*
 * The Unicode case folding mappings definitions
 *
 * Copyright (C) 2009-2023, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _FSHFS_TEST_UNICODE_CASE_FOLDING_MAPPINGS_H )
#define _FSHFS_TEST_UNICODE_CASE_FOLDING_MAPPINGS_H

#include <common.h>
#include <types.h>

#include "fshfs_test_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

/* The data below was derived from ftp://ftp.unicode.org/Public/9.0.0/ucd/CaseFolding.txt
 */
fshfs_test_unicode_case_folding_mapping_t fshfs_test_unicode_case_folding_mappings[ 1325 ] = {
	{ 0x00000041, 0x00000061 },
	{ 0x00000042, 0x00000062 },
	{ 0x00000043, 0x00000063 },
	{ 0x00000044, 0x00000064 },
	{ 0x00000045, 0x00000065 },
	{ 0x00000046, 0x00000066 },
	{ 0x00000047, 0x00000067 },
	{ 0x00000048, 0x00000068 },
	{ 0x00000049, 0x00000069 },
	{ 0x0000004a, 0x0000006a },
	{ 0x0000004b, 0x0000006b },
	{ 0x0000004c, 0x0000006c },
	{ 0x0000004d, 0x0000006d },
	{ 0x0000004e, 0x0000006e },
	{ 0x0000004f, 0x0000006f },
	{ 0x00000050, 0x00000070 },
	{ 0x00000051, 0x00000071 },
	{ 0x00000052, 0x00000072 },
	{ 0x00000053, 0x00000073 },
	{ 0x00000054, 0x00000074 },
	{ 0x00000055, 0x00000075 },
	{ 0x00000056, 0x00000076 },
	{ 0x00000057, 0x00000077 },
	{ 0x00000058, 0x00000078 },
	{ 0x00000059, 0x00000079 },
	{ 0x0000005a, 0x0000007a },
	{ 0x000000b5, 0x000003bc },
	{ 0x000000c0, 0x000000e0 },
	{ 0x000000c1, 0x000000e1 },
	{ 0x000000c2, 0x000000e2 },
	{ 0x000000c3, 0x000000e3 },
	{ 0x000000c4, 0x000000e4 },
	{ 0x000000c5, 0x000000e5 },
	{ 0x000000c6, 0x000000e6 },
	{ 0x000000c7, 0x000000e7 },
	{ 0x000000c8, 0x000000e8 },
	{ 0x000000c9, 0x000000e9 },
	{ 0x000000ca, 0x000000ea },
	{ 0x000000cb, 0x000000eb },
	{ 0x000000cc, 0x000000ec },
	{ 0x000000cd, 0x000000ed },
	{ 0x000000ce, 0x000000ee },
	{ 0x000000cf, 0x000000ef },
	{ 0x000000d0, 0x000000f0 },
	{ 0x000000d1, 0x000000f1 },
	{ 0x000000d2, 0x000000f2 },
	{ 0x000000d3, 0x000000f3 },
	{ 0x000000d4, 0x000000f4 },
	{ 0x000000d5, 0x000000f5 },
	{ 0x000000d6, 0x000000f6 },
	{ 0x000000d8, 0x000000f8 },
	{ 0x000000d9, 0x000000f9 },
	{ 0x000000da, 0x000000fa },
	{ 0x000000db, 0x000000fb },
	{ 0x000000dc, 0x000000fc },
	{ 0x000000dd, 0x000000fd },
	{ 0x000000de, 0x000000fe },
	{ 0x00000100, 0x00000101 },
	{ 0x00000102, 0x00000103 },
	{ 0x00000104, 0x00000105 },
	{ 0x00000106, 0x00000107 },
	{ 0x00000108, 0x00000109 },
	{ 0x0000010a, 0x0000010b },
	{ 0x0000010c, 0x0000010d },
	{ 0x0000010e, 0x0000010f },
	{ 0x00000110, 0x00000111 },
	{ 0x00000112, 0x00000113 },
	{ 0x00000114, 0x00000115 },
	{ 0x00000116, 0x00000117 },
	{ 0x00000118, 0x00000119 },
	{ 0x0000011a, 0x0000011b },
	{ 0x0000011c, 0x0000011d },
	{ 0x0000011e, 0x0000011f },
	{ 0x00000120, 0x00000121 },
	{ 0x00000122, 0x00000123 },
	{ 0x00000124, 0x00000125 },
	{ 0x00000126, 0x00000127 },
	{ 0x00000128, 0x00000129 },
	{ 0x0000012a, 0x0000012b },
	{ 0x0000012c, 0x0000012d },
	{ 0x0000012e, 0x0000012f },
	{ 0x00000132, 0x00000133 },
	{ 0x00000134, 0x00000135 },
	{ 0x00000136, 0x00000137 },
	{ 0x00000139, 0x0000013a },
	{ 0x0000013b, 0x0000013c },
	{ 0x0000013d, 0x0000013e },
	{ 0x0000013f, 0x00000140 },
	{ 0x00000141, 0x00000142 },
	{ 0x00000143, 0x00000144 },
	{ 0x00000145, 0x00000146 },
	{ 0x00000147, 0x00000148 },
	{ 0x0000014a, 0x0000014b },
	{ 0x0000014c, 0x0000014d },
	{ 0x0000014e, 0x0000014f },
	{ 0x00000150, 0x00000151 },
	{ 0x00000152, 0x00000153 },
	{ 0x00000154, 0x00000155 },
	{ 0x00000156, 0x00000157 },
	{ 0x00000158, 0x00000159 },
	{ 0x0000015a, 0x0000015b },
	{ 0x0000015c, 0x0000015d },
	{ 0x0000015e, 0x0000015f },
	{ 0x00000160, 0x00000161 },
	{ 0x00000162, 0x00000163 },
	{ 0x00000164, 0x00000165 },
	{ 0x00000166, 0x00000167 },
	{ 0x00000168, 0x00000169 },
	{ 0x0000016a, 0x0000016b },
	{ 0x0000016c, 0x0000016d },
	{ 0x0000016e, 0x0000016f },
	{ 0x00000170, 0x00000171 },
	{ 0x00000172, 0x00000173 },
	{ 0x00000174, 0x00000175 },
	{ 0x00000176, 0x00000177 },
	{ 0x00000178, 0x000000ff },
	{ 0x00000179, 0x0000017a },
	{ 0x0000017b, 0x0000017c },
	{ 0x0000017d, 0x0000017e },
	{ 0x0000017f, 0x00000073 },
	{ 0x00000181, 0x00000253 },
	{ 0x00000182, 0x00000183 },
	{ 0x00000184, 0x00000185 },
	{ 0x00000186, 0x00000254 },
	{ 0x00000187, 0x00000188 },
	{ 0x00000189, 0x00000256 },
	{ 0x0000018a, 0x00000257 },
	{ 0x0000018b, 0x0000018c },
	{ 0x0000018e, 0x000001dd },
	{ 0x0000018f, 0x00000259 },
	{ 0x00000190, 0x0000025b },
	{ 0x00000191, 0x00000192 },
	{ 0x00000193, 0x00000260 },
	{ 0x00000194, 0x00000263 },
	{ 0x00000196, 0x00000269 },
	{ 0x00000197, 0x00000268 },
	{ 0x00000198, 0x00000199 },
	{ 0x0000019c, 0x0000026f },
	{ 0x0000019d, 0x00000272 },
	{ 0x0000019f, 0x00000275 },
	{ 0x000001a0, 0x000001a1 },
	{ 0x000001a2, 0x000001a3 },
	{ 0x000001a4, 0x000001a5 },
	{ 0x000001a6, 0x00000280 },
	{ 0x000001a7, 0x000001a8 },
	{ 0x000001a9, 0x00000283 },
	{ 0x000001ac, 0x000001ad },
	{ 0x000001ae, 0x00000288 },
	{ 0x000001af, 0x000001b0 },
	{ 0x000001b1, 0x0000028a },
	{ 0x000001b2, 0x0000028b },
	{ 0x000001b3, 0x000001b4 },
	{ 0x000001b5, 0x000001b6 },
	{ 0x000001b7, 0x00000292 },
	{ 0x000001b8, 0x000001b9 },
	{ 0x000001bc, 0x000001bd },
	{ 0x000001c4, 0x000001c6 },
	{ 0x000001c5, 0x000001c6 },
	{ 0x000001c7, 0x000001c9 },
	{ 0x000001c8, 0x000001c9 },
	{ 0x000001ca, 0x000001cc },
	{ 0x000001cb, 0x000001cc },
	{ 0x000001cd, 0x000001ce },
	{ 0x000001cf, 0x000001d0 },
	{ 0x000001d1, 0x000001d2 },
	{ 0x000001d3, 0x000001d4 },
	{ 0x000001d5, 0x000001d6 },
	{ 0x000001d7, 0x000001d8 },
	{ 0x000001d9, 0x000001da },
	{ 0x000001db, 0x000001dc },
	{ 0x000001de, 0x000001df },
	{ 0x000001e0, 0x000001e1 },
	{ 0x000001e2, 0x000001e3 },
	{ 0x000001e4, 0x000001e5 },
	{ 0x000001e6, 0x000001e7 },
	{ 0x000001e8, 0x000001e9 },
	{ 0x000001ea, 0x000001eb },
	{ 0x000001ec, 0x000001ed },
	{ 0x000001ee, 0x000001ef },
	{ 0x000001f1, 0x000001f3 },
	{ 0x000001f2, 0x000001f3 },
	{ 0x000001f4, 0x000001f5 },
	{ 0x000001f6, 0x00000195 },
	{ 0x000001f7, 0x000001bf },
	{ 0x000001f8, 0x000001f9 },
	{ 0x000001fa, 0x000001fb },
	{ 0x000001fc, 0x000001fd },
	{ 0x000001fe, 0x000001ff },
	{ 0x00000200, 0x00000201 },
	{ 0x00000202, 0x00000203 },
	{ 0x00000204, 0x00000205 },
	{ 0x00000206, 0x00000207 },
	{ 0x00000208, 0x00000209 },
	{ 0x0000020a, 0x0000020b },
	{ 0x0000020c, 0x0000020d },
	{ 0x0000020e, 0x0000020f },
	{ 0x00000210, 0x00000211 },
	{ 0x00000212, 0x00000213 },
	{ 0x00000214, 0x00000215 },
	{ 0x00000216, 0x00000217 },
	{ 0x00000218, 0x00000219 },
	{ 0x0000021a, 0x0000021b },
	{ 0x0000021c, 0x0000021d },
	{ 0x0000021e, 0x0000021f },
	{ 0x00000220, 0x0000019e },
	{ 0x00000222, 0x00000223 },
	{ 0x00000224, 0x00000225 },
	{ 0x00000226, 0x00000227 },
	{ 0x00000228, 0x00000229 },
	{ 0x0000022a, 0x0000022b },
	{ 0x0000022c, 0x0000022d },
	{ 0x0000022e, 0x0000022f },
	{ 0x00000230, 0x00000231 },
	{ 0x00000232, 0x00000233 },
	{ 0x0000023a, 0x00002c65 },
	{ 0x0000023b, 0x0000023c },
	{ 0x0000023d, 0x0000019a },
	{ 0x0000023e, 0x00002c66 },
	{ 0x00000241, 0x00000242 },
	{ 0x00000243, 0x00000180 },
	{ 0x00000244, 0x00000289 },
	{ 0x00000245, 0x0000028c },
	{ 0x00000246, 0x00000247 },
	{ 0x00000248, 0x00000249 },
	{ 0x0000024a, 0x0000024b },
	{ 0x0000024c, 0x0000024d },
	{ 0x0000024e, 0x0000024f },
	{ 0x00000345, 0x000003b9 },
	{ 0x00000370, 0x00000371 },
	{ 0x00000372, 0x00000373 },
	{ 0x00000376, 0x00000377 },
	{ 0x0000037f, 0x000003f3 },
	{ 0x00000386, 0x000003ac },
	{ 0x00000388, 0x000003ad },
	{ 0x00000389, 0x000003ae },
	{ 0x0000038a, 0x000003af },
	{ 0x0000038c, 0x000003cc },
	{ 0x0000038e, 0x000003cd },
	{ 0x0000038f, 0x000003ce },
	{ 0x00000391, 0x000003b1 },
	{ 0x00000392, 0x000003b2 },
	{ 0x00000393, 0x000003b3 },
	{ 0x00000394, 0x000003b4 },
	{ 0x00000395, 0x000003b5 },
	{ 0x00000396, 0x000003b6 },
	{ 0x00000397, 0x000003b7 },
	{ 0x00000398, 0x000003b8 },
	{ 0x00000399, 0x000003b9 },
	{ 0x0000039a, 0x000003ba },
	{ 0x0000039b, 0x000003bb },
	{ 0x0000039c, 0x000003bc },
	{ 0x0000039d, 0x000003bd },
	{ 0x0000039e, 0x000003be },
	{ 0x0000039f, 0x000003bf },
	{ 0x000003a0, 0x000003c0 },
	{ 0x000003a1, 0x000003c1 },
	{ 0x000003a3, 0x000003c3 },
	{ 0x000003a4, 0x000003c4 },
	{ 0x000003a5, 0x000003c5 },
	{ 0x000003a6, 0x000003c6 },
	{ 0x000003a7, 0x000003c7 },
	{ 0x000003a8, 0x000003c8 },
	{ 0x000003a9, 0x000003c9 },
	{ 0x000003aa, 0x000003ca },
	{ 0x000003ab, 0x000003cb },
	{ 0x000003c2, 0x000003c3 },
	{ 0x000003cf, 0x000003d7 },
	{ 0x000003d0, 0x000003b2 },
	{ 0x000003d1, 0x000003b8 },
	{ 0x000003d5, 0x000003c6 },
	{ 0x000003d6, 0x000003c0 },
	{ 0x000003d8, 0x000003d9 },
	{ 0x000003da, 0x000003db },
	{ 0x000003dc, 0x000003dd },
	{ 0x000003de, 0x000003df },
	{ 0x000003e0, 0x000003e1 },
	{ 0x000003e2, 0x000003e3 },
	{ 0x000003e4, 0x000003e5 },
	{ 0x000003e6, 0x000003e7 },
	{ 0x000003e8, 0x000003e9 },
	{ 0x000003ea, 0x000003eb },
	{ 0x000003ec, 0x000003ed },
	{ 0x000003ee, 0x000003ef },
	{ 0x000003f0, 0x000003ba },
	{ 0x000003f1, 0x000003c1 },
	{ 0x000003f4, 0x000003b8 },
	{ 0x000003f5, 0x000003b5 },
	{ 0x000003f7, 0x000003f8 },
	{ 0x000003fa, 0x000003fb },
	{ 0x000003fd, 0x0000037b },
	{ 0x000003fe, 0x0000037c },
	{ 0x000003ff, 0x0000037d },
	{ 0x00000400, 0x00000450 },
	{ 0x00000401, 0x00000451 },
	{ 0x00000402, 0x00000452 },
	{ 0x00000403, 0x00000453 },
	{ 0x00000404, 0x00000454 },
	{ 0x00000405, 0x00000455 },
	{ 0x00000406, 0x00000456 },
	{ 0x00000407, 0x00000457 },
	{ 0x00000408, 0x00000458 },
	{ 0x00000409, 0x00000459 },
	{ 0x0000040a, 0x0000045a },
	{ 0x0000040b, 0x0000045b },
	{ 0x0000040c, 0x0000045c },
	{ 0x0000040d, 0x0000045d },
	{ 0x0000040e, 0x0000045e },
	{ 0x0000040f, 0x0000045f },
	{ 0x00000410, 0x00000430 },
	{ 0x00000411, 0x00000431 },
	{ 0x00000412, 0x00000432 },
	{ 0x00000413, 0x00000433 },
	{ 0x00000414, 0x00000434 },
	{ 0x00000415, 0x00000435 },
	{ 0x00000416, 0x00000436 },
	{ 0x00000417, 0x00000437 },
	{ 0x00000418, 0x00000438 },
	{ 0x00000419, 0x00000439 },
	{ 0x0000041a, 0x0000043a },
	{ 0x0000041b, 0x0000043b },
	{ 0x0000041c, 0x0000043c },
	{ 0x0000041d, 0x0000043d },
	{ 0x0000041e, 0x0000043e },
	{ 0x0000041f, 0x0000043f },
	{ 0x00000420, 0x00000440 },
	{ 0x00000421, 0x00000441 },
	{ 0x00000422, 0x00000442 },
	{ 0x00000423, 0x00000443 },
	{ 0x00000424, 0x00000444 },
	{ 0x00000425, 0x00000445 },
	{ 0x00000426, 0x00000446 },
	{ 0x00000427, 0x00000447 },
	{ 0x00000428, 0x00000448 },
	{ 0x00000429, 0x00000449 },
	{ 0x0000042a, 0x0000044a },
	{ 0x0000042b, 0x0000044b },
	{ 0x0000042c, 0x0000044c },
	{ 0x0000042d, 0x0000044d },
	{ 0x0000042e, 0x0000044e },
	{ 0x0000042f, 0x0000044f },
	{ 0x00000460, 0x00000461 },
	{ 0x00000462, 0x00000463 },
	{ 0x00000464, 0x00000465 },
	{ 0x00000466, 0x00000467 },
	{ 0x00000468, 0x00000469 },
	{ 0x0000046a, 0x0000046b },
	{ 0x0000046c, 0x0000046d },
	{ 0x0000046e, 0x0000046f },
	{ 0x00000470, 0x00000471 },
	{ 0x00000472, 0x00000473 },
	{ 0x00000474, 0x00000475 },
	{ 0x00000476, 0x00000477 },
	{ 0x00000478, 0x00000479 },
	{ 0x0000047a, 0x0000047b },
	{ 0x0000047c, 0x0000047d },
	{ 0x0000047e, 0x0000047f },
	{ 0x00000480, 0x00000481 },
	{ 0x0000048a, 0x0000048b },
	{ 0x0000048c, 0x0000048d },
	{ 0x0000048e, 0x0000048f },
	{ 0x00000490, 0x00000491 },
	{ 0x00000492, 0x00000493 },
	{ 0x00000494, 0x00000495 },
	{ 0x00000496, 0x00000497 },
	{ 0x00000498, 0x00000499 },
	{ 0x0000049a, 0x0000049b },
	{ 0x0000049c, 0x0000049d },
	{ 0x0000049e, 0x0000049f },
	{ 0x000004a0, 0x000004a1 },
	{ 0x000004a2, 0x000004a3 },
	{ 0x000004a4, 0x000004a5 },
	{ 0x000004a6, 0x000004a7 },
	{ 0x000004a8, 0x000004a9 },
	{ 0x000004aa, 0x000004ab },
	{ 0x000004ac, 0x000004ad },
	{ 0x000004ae, 0x000004af },
	{ 0x000004b0, 0x000004b1 },
	{ 0x000004b2, 0x000004b3 },
	{ 0x000004b4, 0x000004b5 },
	{ 0x000004b6, 0x000004b7 },
	{ 0x000004b8, 0x000004b9 },
	{ 0x000004ba, 0x000004bb },
	{ 0x000004bc, 0x000004bd },
	{ 0x000004be, 0x000004bf },
	{ 0x000004c0, 0x000004cf },
	{ 0x000004c1, 0x000004c2 },
	{ 0x000004c3, 0x000004c4 },
	{ 0x000004c5, 0x000004c6 },
	{ 0x000004c7, 0x000004c8 },
	{ 0x000004c9, 0x000004ca },
	{ 0x000004cb, 0x000004cc },
	{ 0x000004cd, 0x000004ce },
	{ 0x000004d0, 0x000004d1 },
	{ 0x000004d2, 0x000004d3 },
	{ 0x000004d4, 0x000004d5 },
	{ 0x000004d6, 0x000004d7 },
	{ 0x000004d8, 0x000004d9 },
	{ 0x000004da, 0x000004db },
	{ 0x000004dc, 0x000004dd },
	{ 0x000004de, 0x000004df },
	{ 0x000004e0, 0x000004e1 },
	{ 0x000004e2, 0x000004e3 },
	{ 0x000004e4, 0x000004e5 },
	{ 0x000004e6, 0x000004e7 },
	{ 0x000004e8, 0x000004e9 },
	{ 0x000004ea, 0x000004eb },
	{ 0x000004ec, 0x000004ed },
	{ 0x000004ee, 0x000004ef },
	{ 0x000004f0, 0x000004f1 },
	{ 0x000004f2, 0x000004f3 },
	{ 0x000004f4, 0x000004f5 },
	{ 0x000004f6, 0x000004f7 },
	{ 0x000004f8, 0x000004f9 },
	{ 0x000004fa, 0x000004fb },
	{ 0x000004fc, 0x000004fd },
	{ 0x000004fe, 0x000004ff },
	{ 0x00000500, 0x00000501 },
	{ 0x00000502, 0x00000503 },
	{ 0x00000504, 0x00000505 },
	{ 0x00000506, 0x00000507 },
	{ 0x00000508, 0x00000509 },
	{ 0x0000050a, 0x0000050b },
	{ 0x0000050c, 0x0000050d },
	{ 0x0000050e, 0x0000050f },
	{ 0x00000510, 0x00000511 },
	{ 0x00000512, 0x00000513 },
	{ 0x00000514, 0x00000515 },
	{ 0x00000516, 0x00000517 },
	{ 0x00000518, 0x00000519 },
	{ 0x0000051a, 0x0000051b },
	{ 0x0000051c, 0x0000051d },
	{ 0x0000051e, 0x0000051f },
	{ 0x00000520, 0x00000521 },
	{ 0x00000522, 0x00000523 },
	{ 0x00000524, 0x00000525 },
	{ 0x00000526, 0x00000527 },
	{ 0x00000528, 0x00000529 },
	{ 0x0000052a, 0x0000052b },
	{ 0x0000052c, 0x0000052d },
	{ 0x0000052e, 0x0000052f },
	{ 0x00000531, 0x00000561 },
	{ 0x00000532, 0x00000562 },
	{ 0x00000533, 0x00000563 },
	{ 0x00000534, 0x00000564 },
	{ 0x00000535, 0x00000565 },
	{ 0x00000536, 0x00000566 },
	{ 0x00000537, 0x00000567 },
	{ 0x00000538, 0x00000568 },
	{ 0x00000539, 0x00000569 },
	{ 0x0000053a, 0x0000056a },
	{ 0x0000053b, 0x0000056b },
	{ 0x0000053c, 0x0000056c },
	{ 0x0000053d, 0x0000056d },
	{ 0x0000053e, 0x0000056e },
	{ 0x0000053f, 0x0000056f },
	{ 0x00000540, 0x00000570 },
	{ 0x00000541, 0x00000571 },
	{ 0x00000542, 0x00000572 },
	{ 0x00000543, 0x00000573 },
	{ 0x00000544, 0x00000574 },
	{ 0x00000545, 0x00000575 },
	{ 0x00000546, 0x00000576 },
	{ 0x00000547, 0x00000577 },
	{ 0x00000548, 0x00000578 },
	{ 0x00000549, 0x00000579 },
	{ 0x0000054a, 0x0000057a },
	{ 0x0000054b, 0x0000057b },
	{ 0x0000054c, 0x0000057c },
	{ 0x0000054d, 0x0000057d },
	{ 0x0000054e, 0x0000057e },
	{ 0x0000054f, 0x0000057f },
	{ 0x00000550, 0x00000580 },
	{ 0x00000551, 0x00000581 },
	{ 0x00000552, 0x00000582 },
	{ 0x00000553, 0x00000583 },
	{ 0x00000554, 0x00000584 },
	{ 0x00000555, 0x00000585 },
	{ 0x00000556, 0x00000586 },
	{ 0x000010a0, 0x00002d00 },
	{ 0x000010a1, 0x00002d01 },
	{ 0x000010a2, 0x00002d02 },
	{ 0x000010a3, 0x00002d03 },
	{ 0x000010a4, 0x00002d04 },
	{ 0x000010a5, 0x00002d05 },
	{ 0x000010a6, 0x00002d06 },
	{ 0x000010a7, 0x00002d07 },
	{ 0x000010a8, 0x00002d08 },
	{ 0x000010a9, 0x00002d09 },
	{ 0x000010aa, 0x00002d0a },
	{ 0x000010ab, 0x00002d0b },
	{ 0x000010ac, 0x00002d0c },
	{ 0x000010ad, 0x00002d0d },
	{ 0x000010ae, 0x00002d0e },
	{ 0x000010af, 0x00002d0f },
	{ 0x000010b0, 0x00002d10 },
	{ 0x000010b1, 0x00002d11 },
	{ 0x000010b2, 0x00002d12 },
	{ 0x000010b3, 0x00002d13 },
	{ 0x000010b4, 0x00002d14 },
	{ 0x000010b5, 0x00002d15 },
	{ 0x000010b6, 0x00002d16 },
	{ 0x000010b7, 0x00002d17 },
	{ 0x000010b8, 0x00002d18 },
	{ 0x000010b9, 0x00002d19 },
	{ 0x000010ba, 0x00002d1a },
	{ 0x000010bb, 0x00002d1b },
	{ 0x000010bc, 0x00002d1c },
	{ 0x000010bd, 0x00002d1d },
	{ 0x000010be, 0x00002d1e },
	{ 0x000010bf, 0x00002d1f },
	{ 0x000010c0, 0x00002d20 },
	{ 0x000010c1, 0x00002d21 },
	{ 0x000010c2, 0x00002d22 },
	{ 0x000010c3, 0x00002d23 },
	{ 0x000010c4, 0x00002d24 },
	{ 0x000010c5, 0x00002d25 },
	{ 0x000010c7, 0x00002d27 },
	{ 0x000010cd, 0x00002d2d },
	{ 0x000013f8, 0x000013f0 },
	{ 0x000013f9, 0x000013f1 },
	{ 0x000013fa, 0x000013f2 },
	{ 0x000013fb, 0x000013f3 },
	{ 0x000013fc, 0x000013f4 },
	{ 0x000013fd, 0x000013f5 },
	{ 0x00001c80, 0x00000432 },
	{ 0x00001c81, 0x00000434 },
	{ 0x00001c82, 0x0000043e },
	{ 0x00001c83, 0x00000441 },
	{ 0x00001c84, 0x00000442 },
	{ 0x00001c85, 0x00000442 },
	{ 0x00001c86, 0x0000044a },
	{ 0x00001c87, 0x00000463 },
	{ 0x00001c88, 0x0000a64b },
	{ 0x00001e00, 0x00001e01 },
	{ 0x00001e02, 0x00001e03 },
	{ 0x00001e04, 0x00001e05 },
	{ 0x00001e06, 0x00001e07 },
	{ 0x00001e08, 0x00001e09 },
	{ 0x00001e0a, 0x00001e0b },
	{ 0x00001e0c, 0x00001e0d },
	{ 0x00001e0e, 0x00001e0f },
	{ 0x00001e10, 0x00001e11 },
	{ 0x00001e12, 0x00001e13 },
	{ 0x00001e14, 0x00001e15 },
	{ 0x00001e16, 0x00001e17 },
	{ 0x00001e18, 0x00001e19 },
	{ 0x00001e1a, 0x00001e1b },
	{ 0x00001e1c, 0x00001e1d },
	{ 0x00001e1e, 0x00001e1f },
	{ 0x00001e20, 0x00001e21 },
	{ 0x00001e22, 0x00001e23 },
	{ 0x00001e24, 0x00001e25 },
	{ 0x00001e26, 0x00001e27 },
	{ 0x00001e28, 0x00001e29 },
	{ 0x00001e2a, 0x00001e2b },
	{ 0x00001e2c, 0x00001e2d },
	{ 0x00001e2e, 0x00001e2f },
	{ 0x00001e30, 0x00001e31 },
	{ 0x00001e32, 0x00001e33 },
	{ 0x00001e34, 0x00001e35 },
	{ 0x00001e36, 0x00001e37 },
	{ 0x00001e38, 0x00001e39 },
	{ 0x00001e3a, 0x00001e3b },
	{ 0x00001e3c, 0x00001e3d },
	{ 0x00001e3e, 0x00001e3f },
	{ 0x00001e40, 0x00001e41 },
	{ 0x00001e42, 0x00001e43 },
	{ 0x00001e44, 0x00001e45 },
	{ 0x00001e46, 0x00001e47 },
	{ 0x00001e48, 0x00001e49 },
	{ 0x00001e4a, 0x00001e4b },
	{ 0x00001e4c, 0x00001e4d },
	{ 0x00001e4e, 0x00001e4f },
	{ 0x00001e50, 0x00001e51 },
	{ 0x00001e52, 0x00001e53 },
	{ 0x00001e54, 0x00001e55 },
	{ 0x00001e56, 0x00001e57 },
	{ 0x00001e58, 0x00001e59 },
	{ 0x00001e5a, 0x00001e5b },
	{ 0x00001e5c, 0x00001e5d },
	{ 0x00001e5e, 0x00001e5f },
	{ 0x00001e60, 0x00001e61 },
	{ 0x00001e62, 0x00001e63 },
	{ 0x00001e64, 0x00001e65 },
	{ 0x00001e66, 0x00001e67 },
	{ 0x00001e68, 0x00001e69 },
	{ 0x00001e6a, 0x00001e6b },
	{ 0x00001e6c, 0x00001e6d },
	{ 0x00001e6e, 0x00001e6f },
	{ 0x00001e70, 0x00001e71 },
	{ 0x00001e72, 0x00001e73 },
	{ 0x00001e74, 0x00001e75 },
	{ 0x00001e76, 0x00001e77 },
	{ 0x00001e78, 0x00001e79 },
	{ 0x00001e7a, 0x00001e7b },
	{ 0x00001e7c, 0x00001e7d },
	{ 0x00001e7e, 0x00001e7f },
	{ 0x00001e80, 0x00001e81 },
	{ 0x00001e82, 0x00001e83 },
	{ 0x00001e84, 0x00001e85 },
	{ 0x00001e86, 0x00001e87 },
	{ 0x00001e88, 0x00001e89 },
	{ 0x00001e8a, 0x00001e8b },
	{ 0x00001e8c, 0x00001e8d },
	{ 0x00001e8e, 0x00001e8f },
	{ 0x00001e90, 0x00001e91 },
	{ 0x00001e92, 0x00001e93 },
	{ 0x00001e94, 0x00001e95 },
	{ 0x00001e9b, 0x00001e61 },
	{ 0x00001e9e, 0x000000df },
	{ 0x00001ea0, 0x00001ea1 },
	{ 0x00001ea2, 0x00001ea3 },
	{ 0x00001ea4, 0x00001ea5 },
	{ 0x00001ea6, 0x00001ea7 },
	{ 0x00001ea8, 0x00001ea9 },
	{ 0x00001eaa, 0x00001eab },
	{ 0x00001eac, 0x00001ead },
	{ 0x00001eae, 0x00001eaf },
	{ 0x00001eb0, 0x00001eb1 },
	{ 0x00001eb2, 0x00001eb3 },
	{ 0x00001eb4, 0x00001eb5 },
	{ 0x00001eb6, 0x00001eb7 },
	{ 0x00001eb8, 0x00001eb9 },
	{ 0x00001eba, 0x00001ebb },
	{ 0x00001ebc, 0x00001ebd },
	{ 0x00001ebe, 0x00001ebf },
	{ 0x00001ec0, 0x00001ec1 },
	{ 0x00001ec2, 0x00001ec3 },
	{ 0x00001ec4, 0x00001ec5 },
	{ 0x00001ec6, 0x00001ec7 },
	{ 0x00001ec8, 0x00001ec9 },
	{ 0x00001eca, 0x00001ecb },
	{ 0x00001ecc, 0x00001ecd },
	{ 0x00001ece, 0x00001ecf },
	{ 0x00001ed0, 0x00001ed1 },
	{ 0x00001ed2, 0x00001ed3 },
	{ 0x00001ed4, 0x00001ed5 },
	{ 0x00001ed6, 0x00001ed7 },
	{ 0x00001ed8, 0x00001ed9 },
	{ 0x00001eda, 0x00001edb },
	{ 0x00001edc, 0x00001edd },
	{ 0x00001ede, 0x00001edf },
	{ 0x00001ee0, 0x00001ee1 },
	{ 0x00001ee2, 0x00001ee3 },
	{ 0x00001ee4, 0x00001ee5 },
	{ 0x00001ee6, 0x00001ee7 },
	{ 0x00001ee8, 0x00001ee9 },
	{ 0x00001eea, 0x00001eeb },
	{ 0x00001eec, 0x00001eed },
	{ 0x00001eee, 0x00001eef },
	{ 0x00001ef0, 0x00001ef1 },
	{ 0x00001ef2, 0x00001ef3 },
	{ 0x00001ef4, 0x00001ef5 },
	{ 0x00001ef6, 0x00001ef7 },
	{ 0x00001ef8, 0x00001ef9 },
	{ 0x00001efa, 0x00001efb },
	{ 0x00001efc, 0x00001efd },
	{ 0x00001efe, 0x00001eff },
	{ 0x00001f08, 0x00001f00 },
	{ 0x00001f09, 0x00001f01 },
	{ 0x00001f0a, 0x00001f02 },
	{ 0x00001f0b, 0x00001f03 },
	{ 0x00001f0c, 0x00001f04 },
	{ 0x00001f0d, 0x00001f05 },
	{ 0x00001f0e, 0x00001f06 },
	{ 0x00001f0f, 0x00001f07 },
	{ 0x00001f18, 0x00001f10 },
	{ 0x00001f19, 0x00001f11 },
	{ 0x00001f1a, 0x00001f12 },
	{ 0x00001f1b, 0x00001f13 },
	{ 0x00001f1c, 0x00001f14 },
	{ 0x00001f1d, 0x00001f15 },
	{ 0x00001f28, 0x00001f20 },
	{ 0x00001f29, 0x00001f21 },
	{ 0x00001f2a, 0x00001f22 },
	{ 0x00001f2b, 0x00001f23 },
	{ 0x00001f2c, 0x00001f24 },
	{ 0x00001f2d, 0x00001f25 },
	{ 0x00001f2e, 0x00001f26 },
	{ 0x00001f2f, 0x00001f27 },
	{ 0x00001f38, 0x00001f30 },
	{ 0x00001f39, 0x00001f31 },
	{ 0x00001f3a, 0x00001f32 },
	{ 0x00001f3b, 0x00001f33 },
	{ 0x00001f3c, 0x00001f34 },
	{ 0x00001f3d, 0x00001f35 },
	{ 0x00001f3e, 0x00001f36 },
	{ 0x00001f3f, 0x00001f37 },
	{ 0x00001f48, 0x00001f40 },
	{ 0x00001f49, 0x00001f41 },
	{ 0x00001f4a, 0x00001f42 },
	{ 0x00001f4b, 0x00001f43 },
	{ 0x00001f4c, 0x00001f44 },
	{ 0x00001f4d, 0x00001f45 },
	{ 0x00001f59, 0x00001f51 },
	{ 0x00001f5b, 0x00001f53 },
	{ 0x00001f5d, 0x00001f55 },
	{ 0x00001f5f, 0x00001f57 },
	{ 0x00001f68, 0x00001f60 },
	{ 0x00001f69, 0x00001f61 },
	{ 0x00001f6a, 0x00001f62 },
	{ 0x00001f6b, 0x00001f63 },
	{ 0x00001f6c, 0x00001f64 },
	{ 0x00001f6d, 0x00001f65 },
	{ 0x00001f6e, 0x00001f66 },
	{ 0x00001f6f, 0x00001f67 },
	{ 0x00001f88, 0x00001f80 },
	{ 0x00001f89, 0x00001f81 },
	{ 0x00001f8a, 0x00001f82 },
	{ 0x00001f8b, 0x00001f83 },
	{ 0x00001f8c, 0x00001f84 },
	{ 0x00001f8d, 0x00001f85 },
	{ 0x00001f8e, 0x00001f86 },
	{ 0x00001f8f, 0x00001f87 },
	{ 0x00001f98, 0x00001f90 },
	{ 0x00001f99, 0x00001f91 },
	{ 0x00001f9a, 0x00001f92 },
	{ 0x00001f9b, 0x00001f93 },
	{ 0x00001f9c, 0x00001f94 },
	{ 0x00001f9d, 0x00001f95 },
	{ 0x00001f9e, 0x00001f96 },
	{ 0x00001f9f, 0x00001f97 },
	{ 0x00001fa8, 0x00001fa0 },
	{ 0x00001fa9, 0x00001fa1 },
	{ 0x00001faa, 0x00001fa2 },
	{ 0x00001fab, 0x00001fa3 },
	{ 0x00001fac, 0x00001fa4 },
	{ 0x00001fad, 0x00001fa5 },
	{ 0x00001fae, 0x00001fa6 },
	{ 0x00001faf, 0x00001fa7 },
	{ 0x00001fb8, 0x00001fb0 },
	{ 0x00001fb9, 0x00001fb1 },
	{ 0x00001fba, 0x00001f70 },
	{ 0x00001fbb, 0x00001f71 },
	{ 0x00001fbc, 0x00001fb3 },
	{ 0x00001fbe, 0x000003b9 },
	{ 0x00001fc8, 0x00001f72 },
	{ 0x00001fc9, 0x00001f73 },
	{ 0x00001fca, 0x00001f74 },
	{ 0x00001fcb, 0x00001f75 },
	{ 0x00001fcc, 0x00001fc3 },
	{ 0x00001fd8, 0x00001fd0 },
	{ 0x00001fd9, 0x00001fd1 },
	{ 0x00001fda, 0x00001f76 },
	{ 0x00001fdb, 0x00001f77 },
	{ 0x00001fe8, 0x00001fe0 },
	{ 0x00001fe9, 0x00001fe1 },
	{ 0x00001fea, 0x00001f7a },
	{ 0x00001feb, 0x00001f7b },
	{ 0x00001fec, 0x00001fe5 },
	{ 0x00001ff8, 0x00001f78 },
	{ 0x00001ff9, 0x00001f79 },
	{ 0x00001ffa, 0x00001f7c },
	{ 0x00001ffb, 0x00001f7d },
	{ 0x00001ffc, 0x00001ff3 },
	{ 0x00002126, 0x000003c9 },
	{ 0x0000212a, 0x0000006b },
	{ 0x0000212b, 0x000000e5 },
	{ 0x00002132, 0x0000214e },
	{ 0x00002160, 0x00002170 },
	{ 0x00002161, 0x00002171 },
	{ 0x00002162, 0x00002172 },
	{ 0x00002163, 0x00002173 },
	{ 0x00002164, 0x00002174 },
	{ 0x00002165, 0x00002175 },
	{ 0x00002166, 0x00002176 },
	{ 0x00002167, 0x00002177 },
	{ 0x00002168, 0x00002178 },
	{ 0x00002169, 0x00002179 },
	{ 0x0000216a, 0x0000217a },
	{ 0x0000216b, 0x0000217b },
	{ 0x0000216c, 0x0000217c },
	{ 0x0000216d, 0x0000217d },
	{ 0x0000216e, 0x0000217e },
	{ 0x0000216f, 0x0000217f },
	{ 0x00002183, 0x00002184 },
	{ 0x000024b6, 0x000024d0 },
	{ 0x000024b7, 0x000024d1 },
	{ 0x000024b8, 0x000024d2 },
	{ 0x000024b9, 0x000024d3 },
	{ 0x000024ba, 0x000024d4 },
	{ 0x000024bb, 0x000024d5 },
	{ 0x000024bc, 0x000024d6 },
	{ 0x000024bd, 0x000024d7 },
	{ 0x000024be, 0x000024d8 },
	{ 0x000024bf, 0x000024d9 },
	{ 0x000024c0, 0x000024da },
	{ 0x000024c1, 0x000024db },
	{ 0x000024c2, 0x000024dc },
	{ 0x000024c3, 0x000024dd },
	{ 0x000024c4, 0x000024de },
	{ 0x000024c5, 0x000024df },
	{ 0x000024c6, 0x000024e0 },
	{ 0x000024c7, 0x000024e1 },
	{ 0x000024c8, 0x000024e2 },
	{ 0x000024c9, 0x000024e3 },
	{ 0x000024ca, 0x000024e4 },
	{ 0x000024cb, 0x000024e5 },
	{ 0x000024cc, 0x000024e6 },
	{ 0x000024cd, 0x000024e7 },
	{ 0x000024ce, 0x000024e8 },
	{ 0x000024cf, 0x000024e9 },
	{ 0x00002c00, 0x00002c30 },
	{ 0x00002c01, 0x00002c31 },
	{ 0x00002c02, 0x00002c32 },
	{ 0x00002c03, 0x00002c33 },
	{ 0x00002c04, 0x00002c34 },
	{ 0x00002c05, 0x00002c35 },
	{ 0x00002c06, 0x00002c36 },
	{ 0x00002c07, 0x00002c37 },
	{ 0x00002c08, 0x00002c38 },
	{ 0x00002c09, 0x00002c39 },
	{ 0x00002c0a, 0x00002c3a },
	{ 0x00002c0b, 0x00002c3b },
	{ 0x00002c0c, 0x00002c3c },
	{ 0x00002c0d, 0x00002c3d },
	{ 0x00002c0e, 0x00002c3e },
	{ 0x00002c0f, 0x00002c3f },
	{ 0x00002c10, 0x00002c40 },
	{ 0x00002c11, 0x00002c41 },
	{ 0x00002c12, 0x00002c42 },
	{ 0x00002c13, 0x00002c43 },
	{ 0x00002c14, 0x00002c44 },
	{ 0x00002c15, 0x00002c45 },
	{ 0x00002c16, 0x00002c46 },
	{ 0x00002c17, 0x00002c47 },
	{ 0x00002c18, 0x00002c48 },
	{ 0x00002c19, 0x00002c49 },
	{ 0x00002c1a, 0x00002c4a },
	{ 0x00002c1b, 0x00002c4b },
	{ 0x00002c1c, 0x00002c4c },
	{ 0x00002c1d, 0x00002c4d },
	{ 0x00002c1e, 0x00002c4e },
	{ 0x00002c1f, 0x00002c4f },
	{ 0x00002c20, 0x00002c50 },
	{ 0x00002c21, 0x00002c51 },
	{ 0x00002c22, 0x00002c52 },
	{ 0x00002c23, 0x00002c53 },
	{ 0x00002c24, 0x00002c54 },
	{ 0x00002c25, 0x00002c55 },
	{ 0x00002c26, 0x00002c56 },
	{ 0x00002c27, 0x00002c57 },
	{ 0x00002c28, 0x00002c58 },
	{ 0x00002c29, 0x00002c59 },
	{ 0x00002c2a, 0x00002c5a },
	{ 0x00002c2b, 0x00002c5b },
	{ 0x00002c2c, 0x00002c5c },
	{ 0x00002c2d, 0x00002c5d },
	{ 0x00002c2e, 0x00002c5e },
	{ 0x00002c60, 0x00002c61 },
	{ 0x00002c62, 0x0000026b },
	{ 0x00002c63, 0x00001d7d },
	{ 0x00002c64, 0x0000027d },
	{ 0x00002c67, 0x00002c68 },
	{ 0x00002c69, 0x00002c6a },
	{ 0x00002c6b, 0x00002c6c },
	{ 0x00002c6d, 0x00000251 },
	{ 0x00002c6e, 0x00000271 },
	{ 0x00002c6f, 0x00000250 },
	{ 0x00002c70, 0x00000252 },
	{ 0x00002c72, 0x00002c73 },
	{ 0x00002c75, 0x00002c76 },
	{ 0x00002c7e, 0x0000023f },
	{ 0x00002c7f, 0x00000240 },
	{ 0x00002c80, 0x00002c81 },
	{ 0x00002c82, 0x00002c83 },
	{ 0x00002c84, 0x00002c85 },
	{ 0x00002c86, 0x00002c87 },
	{ 0x00002c88, 0x00002c89 },
	{ 0x00002c8a, 0x00002c8b },
	{ 0x00002c8c, 0x00002c8d },
	{ 0x00002c8e, 0x00002c8f },
	{ 0x00002c90, 0x00002c91 },
	{ 0x00002c92, 0x00002c93 },
	{ 0x00002c94, 0x00002c95 },
	{ 0x00002c96, 0x00002c97 },
	{ 0x00002c98, 0x00002c99 },
	{ 0x00002c9a, 0x00002c9b },
	{ 0x00002c9c, 0x00002c9d },
	{ 0x00002c9e, 0x00002c9f },
	{ 0x00002ca0, 0x00002ca1 },
	{ 0x00002ca2, 0x00002ca3 },
	{ 0x00002ca4, 0x00002ca5 },
	{ 0x00002ca6, 0x00002ca7 },
	{ 0x00002ca8, 0x00002ca9 },
	{ 0x00002caa, 0x00002cab },
	{ 0x00002cac, 0x00002cad },
	{ 0x00002cae, 0x00002caf },
	{ 0x00002cb0, 0x00002cb1 },
	{ 0x00002cb2, 0x00002cb3 },
	{ 0x00002cb4, 0x00002cb5 },
	{ 0x00002cb6, 0x00002cb7 },
	{ 0x00002cb8, 0x00002cb9 },
	{ 0x00002cba, 0x00002cbb },
	{ 0x00002cbc, 0x00002cbd },
	{ 0x00002cbe, 0x00002cbf },
	{ 0x00002cc0, 0x00002cc1 },
	{ 0x00002cc2, 0x00002cc3 },
	{ 0x00002cc4, 0x00002cc5 },
	{ 0x00002cc6, 0x00002cc7 },
	{ 0x00002cc8, 0x00002cc9 },
	{ 0x00002cca, 0x00002ccb },
	{ 0x00002ccc, 0x00002ccd },
	{ 0x00002cce, 0x00002ccf },
	{ 0x00002cd0, 0x00002cd1 },
	{ 0x00002cd2, 0x00002cd3 },
	{ 0x00002cd4, 0x00002cd5 },
	{ 0x00002cd6, 0x00002cd7 },
	{ 0x00002cd8, 0x00002cd9 },
	{ 0x00002cda, 0x00002cdb },
	{ 0x00002cdc, 0x00002cdd },
	{ 0x00002cde, 0x00002cdf },
	{ 0x00002ce0, 0x00002ce1 },
	{ 0x00002ce2, 0x00002ce3 },
	{ 0x00002ceb, 0x00002cec },
	{ 0x00002ced, 0x00002cee },
	{ 0x00002cf2, 0x00002cf3 },
	{ 0x0000a640, 0x0000a641 },
	{ 0x0000a642, 0x0000a643 },
	{ 0x0000a644, 0x0000a645 },
	{ 0x0000a646, 0x0000a647 },
	{ 0x0000a648, 0x0000a649 },
	{ 0x0000a64a, 0x0000a64b },
	{ 0x0000a64c, 0x0000a64d },
	{ 0x0000a64e, 0x0000a64f },
	{ 0x0000a650, 0x0000a651 },
	{ 0x0000a652, 0x0000a653 },
	{ 0x0000a654, 0x0000a655 },
	{ 0x0000a656, 0x0000a657 },
	{ 0x0000a658, 0x0000a659 },
	{ 0x0000a65a, 0x0000a65b },
	{ 0x0000a65c, 0x0000a65d },
	{ 0x0000a65e, 0x0000a65f },
	{ 0x0000a660, 0x0000a661 },
	{ 0x0000a662, 0x0000a663 },
	{ 0x0000a664, 0x0000a665 },
	{ 0x0000a666, 0x0000a667 },
	{ 0x0000a668, 0x0000a669 },
	{ 0x0000a66a, 0x0000a66b },
	{ 0x0000a66c, 0x0000a66d },
	{ 0x0000a680, 0x0000a681 },
	{ 0x0000a682, 0x0000a683 },
	{ 0x0000a684, 0x0000a685 },
	{ 0x0000a686, 0x0000a687 },
	{ 0x0000a688, 0x0000a689 },
	{ 0x0000a68a, 0x0000a68b },
	{ 0x0000a68c, 0x0000a68d },
	{ 0x0000a68e, 0x0000a68f },
	{ 0x0000a690, 0x0000a691 },
	{ 0x0000a692, 0x0000a693 },
	{ 0x0000a694, 0x0000a695 },
	{ 0x0000a696, 0x0000a697 },
	{ 0x0000a698, 0x0000a699 },
	{ 0x0000a69a, 0x0000a69b },
	{ 0x0000a722, 0x0000a723 },
	{ 0x0000a724, 0x0000a725 },
	{ 0x0000a726, 0x0000a727 },
	{ 0x0000a728, 0x0000a729 },
	{ 0x0000a72a, 0x0000a72b },
	{ 0x0000a72c, 0x0000a72d },
	{ 0x0000a72e, 0x0000a72f },
	{ 0x0000a732, 0x0000a733 },
	{ 0x0000a734, 0x0000a735 },
	{ 0x0000a736, 0x0000a737 },
	{ 0x0000a738, 0x0000a739 },
	{ 0x0000a73a, 0x0000a73b },
	{ 0x0000a73c, 0x0000a73d },
	{ 0x0000a73e, 0x0000a73f },
	{ 0x0000a740, 0x0000a741 },
	{ 0x0000a742, 0x0000a743 },
	{ 0x0000a744, 0x0000a745 },
	{ 0x0000a746, 0x0000a747 },
	{ 0x0000a748, 0x0000a749 },
	{ 0x0000a74a, 0x0000a74b },
	{ 0x0000a74c, 0x0000a74d },
	{ 0x0000a74e, 0x0000a74f },
	{ 0x0000a750, 0x0000a751 },
	{ 0x0000a752, 0x0000a753 },
	{ 0x0000a754, 0x0000a755 },
	{ 0x0000a756, 0x0000a757 },
	{ 0x0000a758, 0x0000a759 },
	{ 0x0000a75a, 0x0000a75b },
	{ 0x0000a75c, 0x0000a75d },
	{ 0x0000a75e, 0x0000a75f },
	{ 0x0000a760, 0x0000a761 },
	{ 0x0000a762, 0x0000a763 },
	{ 0x0000a764, 0x0000a765 },
	{ 0x0000a766, 0x0000a767 },
	{ 0x0000a768, 0x0000a769 },
	{ 0x0000a76a, 0x0000a76b },
	{ 0x0000a76c, 0x0000a76d },
	{ 0x0000a76e, 0x0000a76f },
	{ 0x0000a779, 0x0000a77a },
	{ 0x0000a77b, 0x0000a77c },
	{ 0x0000a77d, 0x00001d79 },
	{ 0x0000a77e, 0x0000a77f },
	{ 0x0000a780, 0x0000a781 },
	{ 0x0000a782, 0x0000a783 },
	{ 0x0000a784, 0x0000a785 },
	{ 0x0000a786, 0x0000a787 },
	{ 0x0000a78b, 0x0000a78c },
	{ 0x0000a78d, 0x00000265 },
	{ 0x0000a790, 0x0000a791 },
	{ 0x0000a792, 0x0000a793 },
	{ 0x0000a796, 0x0000a797 },
	{ 0x0000a798, 0x0000a799 },
	{ 0x0000a79a, 0x0000a79b },
	{ 0x0000a79c, 0x0000a79d },
	{ 0x0000a79e, 0x0000a79f },
	{ 0x0000a7a0, 0x0000a7a1 },
	{ 0x0000a7a2, 0x0000a7a3 },
	{ 0x0000a7a4, 0x0000a7a5 },
	{ 0x0000a7a6, 0x0000a7a7 },
	{ 0x0000a7a8, 0x0000a7a9 },
	{ 0x0000a7aa, 0x00000266 },
	{ 0x0000a7ab, 0x0000025c },
	{ 0x0000a7ac, 0x00000261 },
	{ 0x0000a7ad, 0x0000026c },
	{ 0x0000a7ae, 0x0000026a },
	{ 0x0000a7b0, 0x0000029e },
	{ 0x0000a7b1, 0x00000287 },
	{ 0x0000a7b2, 0x0000029d },
	{ 0x0000a7b3, 0x0000ab53 },
	{ 0x0000a7b4, 0x0000a7b5 },
	{ 0x0000a7b6, 0x0000a7b7 },
	{ 0x0000ab70, 0x000013a0 },
	{ 0x0000ab71, 0x000013a1 },
	{ 0x0000ab72, 0x000013a2 },
	{ 0x0000ab73, 0x000013a3 },
	{ 0x0000ab74, 0x000013a4 },
	{ 0x0000ab75, 0x000013a5 },
	{ 0x0000ab76, 0x000013a6 },
	{ 0x0000ab77, 0x000013a7 },
	{ 0x0000ab78, 0x000013a8 },
	{ 0x0000ab79, 0x000013a9 },
	{ 0x0000ab7a, 0x000013aa },
	{ 0x0000ab7b, 0x000013ab },
	{ 0x0000ab7c, 0x000013ac },
	{ 0x0000ab7d, 0x000013ad },
	{ 0x0000ab7e, 0x000013ae },
	{ 0x0000ab7f, 0x000013af },
	{ 0x0000ab80, 0x000013b0 },
	{ 0x0000ab81, 0x000013b1 },
	{ 0x0000ab82, 0x000013b2 },
	{ 0x0000ab83, 0x000013b3 },
	{ 0x0000ab84, 0x000013b4 },
	{ 0x0000ab85, 0x000013b5 },
	{ 0x0000ab86, 0x000013b6 },
	{ 0x0000ab87, 0x000013b7 },
	{ 0x0000ab88, 0x000013b8 },
	{ 0x0000ab89, 0x000013b9 },
	{ 0x0000ab8a, 0x000013ba },
	{ 0x0000ab8b, 0x000013bb },
	{ 0x0000ab8c, 0x000013bc },
	{ 0x0000ab8d, 0x000013bd },
	{ 0x0000ab8e, 0x000013be },
	{ 0x0000ab8f, 0x000013bf },
	{ 0x0000ab90, 0x000013c0 },
	{ 0x0000ab91, 0x000013c1 },
	{ 0x0000ab92, 0x000013c2 },
	{ 0x0000ab93, 0x000013c3 },
	{ 0x0000ab94, 0x000013c4 },
	{ 0x0000ab95, 0x000013c5 },
	{ 0x0000ab96, 0x000013c6 },
	{ 0x0000ab97, 0x000013c7 },
	{ 0x0000ab98, 0x000013c8 },
	{ 0x0000ab99, 0x000013c9 },
	{ 0x0000ab9a, 0x000013ca },
	{ 0x0000ab9b, 0x000013cb },
	{ 0x0000ab9c, 0x000013cc },
	{ 0x0000ab9d, 0x000013cd },
	{ 0x0000ab9e, 0x000013ce },
	{ 0x0000ab9f, 0x000013cf },
	{ 0x0000aba0, 0x000013d0 },
	{ 0x0000aba1, 0x000013d1 },
	{ 0x0000aba2, 0x000013d2 },
	{ 0x0000aba3, 0x000013d3 },
	{ 0x0000aba4, 0x000013d4 },
	{ 0x0000aba5, 0x000013d5 },
	{ 0x0000aba6, 0x000013d6 },
	{ 0x0000aba7, 0x000013d7 },
	{ 0x0000aba8, 0x000013d8 },
	{ 0x0000aba9, 0x000013d9 },
	{ 0x0000abaa, 0x000013da },
	{ 0x0000abab, 0x000013db },
	{ 0x0000abac, 0x000013dc },
	{ 0x0000abad, 0x000013dd },
	{ 0x0000abae, 0x000013de },
	{ 0x0000abaf, 0x000013df },
	{ 0x0000abb0, 0x000013e0 },
	{ 0x0000abb1, 0x000013e1 },
	{ 0x0000abb2, 0x000013e2 },
	{ 0x0000abb3, 0x000013e3 },
	{ 0x0000abb4, 0x000013e4 },
	{ 0x0000abb5, 0x000013e5 },
	{ 0x0000abb6, 0x000013e6 },
	{ 0x0000abb7, 0x000013e7 },
	{ 0x0000abb8, 0x000013e8 },
	{ 0x0000abb9, 0x000013e9 },
	{ 0x0000abba, 0x000013ea },
	{ 0x0000abbb, 0x000013eb },
	{ 0x0000abbc, 0x000013ec },
	{ 0x0000abbd, 0x000013ed },
	{ 0x0000abbe, 0x000013ee },
	{ 0x0000abbf, 0x000013ef },
	{ 0x0000ff21, 0x0000ff41 },
	{ 0x0000ff22, 0x0000ff42 },
	{ 0x0000ff23, 0x0000ff43 },
	{ 0x0000ff24, 0x0000ff44 },
	{ 0x0000ff25, 0x0000ff45 },
	{ 0x0000ff26, 0x0000ff46 },
	{ 0x0000ff27, 0x0000ff47 },
	{ 0x0000ff28, 0x0000ff48 },
	{ 0x0000ff29, 0x0000ff49 },
	{ 0x0000ff2a, 0x0000ff4a },
	{ 0x0000ff2b, 0x0000ff4b },
	{ 0x0000ff2c, 0x0000ff4c },
	{ 0x0000ff2d, 0x0000ff4d },
	{ 0x0000ff2e, 0x0000ff4e },
	{ 0x0000ff2f, 0x0000ff4f },
	{ 0x0000ff30, 0x0000ff50 },
	{ 0x0000ff31, 0x0000ff51 },
	{ 0x0000ff32, 0x0000ff52 },
	{ 0x0000ff33, 0x0000ff53 },
	{ 0x0000ff34, 0x0000ff54 },
	{ 0x0000ff35, 0x0000ff55 },
	{ 0x0000ff36, 0x0000ff56 },
	{ 0x0000ff37, 0x0000ff57 },
	{ 0x0000ff38, 0x0000ff58 },
	{ 0x0000ff39, 0x0000ff59 },
	{ 0x0000ff3a, 0x0000ff5a },
	{ 0x00010400, 0x00010428 },
	{ 0x00010401, 0x00010429 },
	{ 0x00010402, 0x0001042a },
	{ 0x00010403, 0x0001042b },
	{ 0x00010404, 0x0001042c },
	{ 0x00010405, 0x0001042d },
	{ 0x00010406, 0x0001042e },
	{ 0x00010407, 0x0001042f },
	{ 0x00010408, 0x00010430 },
	{ 0x00010409, 0x00010431 },
	{ 0x0001040a, 0x00010432 },
	{ 0x0001040b, 0x00010433 },
	{ 0x0001040c, 0x00010434 },
	{ 0x0001040d, 0x00010435 },
	{ 0x0001040e, 0x00010436 },
	{ 0x0001040f, 0x00010437 },
	{ 0x00010410, 0x00010438 },
	{ 0x00010411, 0x00010439 },
	{ 0x00010412, 0x0001043a },
	{ 0x00010413, 0x0001043b },
	{ 0x00010414, 0x0001043c },
	{ 0x00010415, 0x0001043d },
	{ 0x00010416, 0x0001043e },
	{ 0x00010417, 0x0001043f },
	{ 0x00010418, 0x00010440 },
	{ 0x00010419, 0x00010441 },
	{ 0x0001041a, 0x00010442 },
	{ 0x0001041b, 0x00010443 },
	{ 0x0001041c, 0x00010444 },
	{ 0x0001041d, 0x00010445 },
	{ 0x0001041e, 0x00010446 },
	{ 0x0001041f, 0x00010447 },
	{ 0x00010420, 0x00010448 },
	{ 0x00010421, 0x00010449 },
	{ 0x00010422, 0x0001044a },
	{ 0x00010423, 0x0001044b },
	{ 0x00010424, 0x0001044c },
	{ 0x00010425, 0x0001044d },
	{ 0x00010426, 0x0001044e },
	{ 0x00010427, 0x0001044f },
	{ 0x000104b0, 0x000104d8 },
	{ 0x000104b1, 0x000104d9 },
	{ 0x000104b2, 0x000104da },
	{ 0x000104b3, 0x000104db },
	{ 0x000104b4, 0x000104dc },
	{ 0x000104b5, 0x000104dd },
	{ 0x000104b6, 0x000104de },
	{ 0x000104b7, 0x000104df },
	{ 0x000104b8, 0x000104e0 },
	{ 0x000104b9, 0x000104e1 },
	{ 0x000104ba, 0x000104e2 },
	{ 0x000104bb, 0x000104e3 },
	{ 0x000104bc, 0x000104e4 },
	{ 0x000104bd, 0x000104e5 },
	{ 0x000104be, 0x000104e6 },
	{ 0x000104bf, 0x000104e7 },
	{ 0x000104c0, 0x000104e8 },
	{ 0x000104c1, 0x000104e9 },
	{ 0x000104c2, 0x000104ea },
	{ 0x000104c3, 0x000104eb },
	{ 0x000104c4, 0x000104ec },
	{ 0x000104c5, 0x000104ed },
	{ 0x000104c6, 0x000104ee },
	{ 0x000104c7, 0x000104ef },
	{ 0x000104c8, 0x000104f0 },
	{ 0x000104c9, 0x000104f1 },
	{ 0x000104ca, 0x000104f2 },
	{ 0x000104cb, 0x000104f3 },
	{ 0x000104cc, 0x000104f4 },
	{ 0x000104cd, 0x000104f5 },
	{ 0x000104ce, 0x000104f6 },
	{ 0x000104cf, 0x000104f7 },
	{ 0x000104d0, 0x000104f8 },
	{ 0x000104d1, 0x000104f9 },
	{ 0x000104d2, 0x000104fa },
	{ 0x000104d3, 0x000104fb },
	{ 0x00010c80, 0x00010cc0 },
	{ 0x00010c81, 0x00010cc1 },
	{ 0x00010c82, 0x00010cc2 },
	{ 0x00010c83, 0x00010cc3 },
	{ 0x00010c84, 0x00010cc4 },
	{ 0x00010c85, 0x00010cc5 },
	{ 0x00010c86, 0x00010cc6 },
	{ 0x00010c87, 0x00010cc7 },
	{ 0x00010c88, 0x00010cc8 },
	{ 0x00010c89, 0x00010cc9 },
	{ 0x00010c8a, 0x00010cca },
	{ 0x00010c8b, 0x00010ccb },
	{ 0x00010c8c, 0x00010ccc },
	{ 0x00010c8d, 0x00010ccd },
	{ 0x00010c8e, 0x00010cce },
	{ 0x00010c8f, 0x00010ccf },
	{ 0x00010c90, 0x00010cd0 },
	{ 0x00010c91, 0x00010cd1 },
	{ 0x00010c92, 0x00010cd2 },
	{ 0x00010c93, 0x00010cd3 },
	{ 0x00010c94, 0x00010cd4 },
	{ 0x00010c95, 0x00010cd5 },
	{ 0x00010c96, 0x00010cd6 },
	{ 0x00010c97, 0x00010cd7 },
	{ 0x00010c98, 0x00010cd8 },
	{ 0x00010c99, 0x00010cd9 },
	{ 0x00010c9a, 0x00010cda },
	{ 0x00010c9b, 0x00010cdb },
	{ 0x00010c9c, 0x00010cdc },
	{ 0x00010c9d, 0x00010cdd },
	{ 0x00010c9e, 0x00010cde },
	{ 0x00010c9f, 0x00010cdf },
	{ 0x00010ca0, 0x00010ce0 },
	{ 0x00010ca1, 0x00010ce1 },
	{ 0x00010ca2, 0x00010ce2 },
	{ 0x00010ca3, 0x00010ce3 },
	{ 0x00010ca4, 0x00010ce4 },
	{ 0x00010ca5, 0x00010ce5 },
	{ 0x00010ca6, 0x00010ce6 },
	{ 0x00010ca7, 0x00010ce7 },
	{ 0x00010ca8, 0x00010ce8 },
	{ 0x00010ca9, 0x00010ce9 },
	{ 0x00010caa, 0x00010cea },
	{ 0x00010cab, 0x00010ceb },
	{ 0x00010cac, 0x00010cec },
	{ 0x00010cad, 0x00010ced },
	{ 0x00010cae, 0x00010cee },
	{ 0x00010caf, 0x00010cef },
	{ 0x00010cb0, 0x00010cf0 },
	{ 0x00010cb1, 0x00010cf1 },
	{ 0x00010cb2, 0x00010cf2 },
	{ 0x000118a0, 0x000118c0 },
	{ 0x000118a1, 0x000118c1 },
	{ 0x000118a2, 0x000118c2 },
	{ 0x000118a3, 0x000118c3 },
	{ 0x000118a4, 0x000118c4 },
	{ 0x000118a5, 0x000118c5 },
	{ 0x000118a6, 0x000118c6 },
	{ 0x000118a7, 0x000118c7 },
	{ 0x000118a8, 0x000118c8 },
	{ 0x000118a9, 0x000118c9 },
	{ 0x000118aa, 0x000118ca },
	{ 0x000118ab, 0x000118cb },
	{ 0x000118ac, 0x000118cc },
	{ 0x000118ad, 0x000118cd },
	{ 0x000118ae, 0x000118ce },
	{ 0x000118af, 0x000118cf },
	{ 0x000118b0, 0x000118d0 },
	{ 0x000118b1, 0x000118d1 },
	{ 0x000118b2, 0x000118d2 },
	{ 0x000118b3, 0x000118d3 },
	{ 0x000118b4, 0x000118d4 },
	{ 0x000118b5, 0x000118d5 },
	{ 0x000118b6, 0x000118d6 },
	{ 0x000118b7, 0x000118d7 },
	{ 0x000118b8, 0x000118d8 },
	{ 0x000118b9, 0x000118d9 },
	{ 0x000118ba, 0x000118da },
	{ 0x000118bb, 0x000118db },
	{ 0x000118bc, 0x000118dc },
	{ 0x000118bd, 0x000118dd },
	{ 0x000118be, 0x000118de },
	{ 0x000118bf, 0x000118df },
	{ 0x0001e900, 0x0001e922 },
	{ 0x0001e901, 0x0001e923 },
	{ 0x0001e902, 0x0001e924 },
	{ 0x0001e903, 0x0001e925 },
	{ 0x0001e904, 0x0001e926 },
	{ 0x0001e905, 0x0001e927 },
	{ 0x0001e906, 0x0001e928 },
	{ 0x0001e907, 0x0001e929 },
	{ 0x0001e908, 0x0001e92a },
	{ 0x0001e909, 0x0001e92b },
	{ 0x0001e90a, 0x0001e92c },
	{ 0x0001e90b, 0x0001e92d },
	{ 0x0001e90c, 0x0001e92e },
	{ 0x0001e90d, 0x0001e92f },
	{ 0x0001e90e, 0x0001e930 },
	{ 0x0001e90f, 0x0001e931 },
	{ 0x0001e910, 0x0001e932 },
	{ 0x0001e911, 0x0001e933 },
	{ 0x0001e912, 0x0001e934 },
	{ 0x0001e913, 0x0001e935 },
	{ 0x0001e914, 0x0001e936 },
	{ 0x0001e915, 0x0001e937 },
	{ 0x0001e916, 0x0001e938 },
	{ 0x0001e917, 0x0001e939 },
	{ 0x0001e918, 0x0001e93a },
	{ 0x0001e919, 0x0001e93b },
	{ 0x0001e91a, 0x0001e93c },
	{ 0x0001e91b, 0x0001e93d },
	{ 0x0001e91c, 0x0001e93e },
	{ 0x0001e91d, 0x0001e93f },
	{ 0x0001e91e, 0x0001e940 },
	{ 0x0001e91f, 0x0001e941 },
	{ 0x0001e920, 0x0001e942 },
	{ 0x0001e921, 0x0001e943 }
};

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _FSHFS_TEST_UNICODE_CASE_FOLDING_MAPPINGS_H ) */

