
@{{BLOCK(battlegym)

@=======================================================================
@
@	battlegym, 256x512@4, 
@	+ palette 16 entries, not compressed
@	+ 49 tiles (t|f reduced) not compressed
@	+ regular map (flat), not compressed, 32x64 
@	Total size: 32 + 1568 + 4096 = 5696
@
@	Time-stamp: 2014-09-26, 14:52:17
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.12
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global battlegymTiles		@ 1568 unsigned chars
	.hidden battlegymTiles
battlegymTiles:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x1111,0x1111,0x2222,0x2222,0x1111,0x1111,0x1111,0x1111
	.hword 0x1111,0x1111,0x2222,0x2222,0x1111,0x1111,0x1111,0x1111
	.hword 0x2222,0x2222,0x1111,0x1111,0x2222,0x2222,0x2222,0x2222
	.hword 0x1111,0x1111,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222
	.hword 0x1111,0x1111,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222
	.hword 0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222

	.hword 0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222
	.hword 0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x3333,0x3333
	.hword 0x4444,0x4444,0x3333,0x3333,0x5555,0x5555,0x5555,0x5555
	.hword 0x4444,0x4444,0x6666,0x6666,0x6666,0x6666,0x6767,0x6767
	.hword 0x7676,0x7676,0x6767,0x6767,0x7777,0x7777,0x7777,0x7777
	.hword 0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x8787,0x8787
	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0x8888,0x8888
	.hword 0x8888,0x8888,0x8888,0x8888,0x8888,0x8888,0x9898,0x9898

	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0x8888,0x8888
	.hword 0x8888,0x8888,0x8888,0x8888,0x8888,0xA988,0xA898,0xAAAA
	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0x8888,0x8888
	.hword 0x8888,0x8888,0x9888,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xB9B9
	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0x8888,0x8888
	.hword 0xA988,0xAAAA,0xAAAA,0xAAAA,0xBAAA,0x9999,0xB9B9,0xB9B9
	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0x9888,0xAAAA
	.hword 0xAAAA,0xAAAA,0xAAAA,0x999B,0x9999,0x9999,0xB9B9,0xB9B9

	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0xAAAA,0xAAAA
	.hword 0xAAAA,0xAAAA,0x9999,0x9999,0x9999,0x9999,0xB9B9,0xB9B9
	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0xAAAA,0x8889
	.hword 0xAAAA,0xAAAA,0xB999,0xAAAA,0x9999,0x9999,0xB9B9,0xB9B9
	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0x8888,0x8888
	.hword 0xAAAA,0x8889,0xAAAA,0xAAAA,0xB999,0xAAAA,0xB9B9,0xB9B9
	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0x8888,0x8888
	.hword 0x8888,0x8888,0x9AAA,0x8888,0xAAAA,0xAAAA,0xA9B9,0xAAAA

	.hword 0x7878,0x7878,0x8787,0x8787,0x8888,0x8888,0x8888,0x8888
	.hword 0x8888,0x8888,0x8888,0x8888,0x889A,0x8888,0xAAAA,0x989A
	.hword 0x8989,0x8989,0x9898,0x9898,0x9999,0x9999,0x9999,0x9999
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0x8989,0x8989,0x9898,0x9898,0x9999,0x9999,0x9999,0x9999
	.hword 0x9999,0x9999,0x9999,0xB999,0x9999,0xA999,0x9999,0xAB99
	.hword 0x8989,0x8989,0x9898,0xAA98,0xB999,0xAAAA,0xAAB9,0xBBAA
	.hword 0xAAAB,0xBBBB,0xBBAA,0xBBBB,0xBBBA,0xBBBB,0xBBBA,0xBBBB

	.hword 0xAAAA,0x9AAA,0xBAAA,0xB9B9,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0x9B9B,0x9B9B,0xB9B9,0xB9B9,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xAAAB,0xAAAA,0xB9B9,0xAAA9,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0x8989,0x8989,0x98AA,0x9898,0xAAAA,0x999B,0xAABB,0x9BAA
	.hword 0xBBBB,0xBAAA,0xBBBB,0xAABB,0xBBBB,0xABBB,0xBBBB,0xABBB

	.hword 0x8989,0x8989,0x9898,0x9898,0x9999,0x9999,0x9999,0x9999
	.hword 0x9999,0x9999,0x999B,0x9999,0x999A,0x9999,0x99BA,0x9999
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0x9999,0xAB99,0x9999,0xA999,0x9999,0xB999,0x9999,0x9999
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0xBBBA,0xBBBB,0xBBBA,0xBBBB,0xBBAA,0xBBBB,0xAAAB,0xBBBB
	.hword 0xAAB9,0xBBAA,0xB999,0xAAAA,0x9999,0xAAB9,0x9999,0xB999

	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBAAA,0xBBBB,0xAAAA,0xBAAA
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xAB99,0xAAAA,0x9999,0xAB99,0x9999,0x9999,0x9999,0x9999
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0xAAAA,0xBBBB,0xAAAA,0xAAAA,0xB999,0xAAAA,0x9999,0x9999
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999

	.hword 0xBBBB,0xBBBB,0xBAAA,0xBBBB,0xAAAA,0xAAAA,0xAB99,0xAAAA
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xAAAA,0xBBBB,0xAAAA,0xAAAA
	.hword 0xB999,0xAAAA,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xAAAA,0xAAAA
	.hword 0xAAAA,0xAAAA,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x9999,0x9999,0x9999,0x9999

	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999
	.hword 0x9999,0x9999,0x9999,0xB999,0x9999,0xAAB9,0xB999,0xAAAA
	.hword 0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0xAB99
	.hword 0xAB99,0xAAAA,0xAAAA,0xBAAA,0xBAAA,0xBBBB,0xBBBB,0xBBBB
	.hword 0x9999,0x9999,0x9999,0x9999,0xB999,0xAAAA,0xAAAA,0xAAAA
	.hword 0xAAAA,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0x9999,0x9999,0xAB99,0xAAAA,0xAAAA,0xAAAA,0xBAAA,0xBBBB
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB

	.hword 0xB999,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xBBBB,0xBBBB,0xBBBB
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0x9999,0x9999,0xAAAA,0x999B,0xAAAA,0xAAAA,0xBBBB,0xAAAA
	.hword 0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB
	.hword 0x9999,0x9999,0x9999,0x9999,0xBAAA,0x9999,0xAAAA,0xAAAA
	.hword 0xABBB,0xAAAA,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB,0xBBBB

	.hword 0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111
	.hword 0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111,0x1111
	.hword 0x7676,0x7676,0x6767,0x6767,0x7777,0x7777,0x7777,0x7777
	.hword 0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x8787,0x7877
	.hword 0x7676,0x7676,0x6767,0x6767,0x7777,0x7777,0x7777,0x7777
	.hword 0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7878,0x7878
	.hword 0x7878,0x8788,0x8787,0x7877,0x8888,0x8888,0x8888,0x8888
	.hword 0x8888,0x8888,0x8888,0x8888,0x8888,0x8888,0x9898,0x9898

	.hword 0x8787,0x8787,0x7878,0x7878,0x8888,0x8888,0x8888,0x8888
	.hword 0x8888,0x8888,0x8888,0x8888,0x8888,0x8888,0x9898,0x9898

	.section .rodata
	.align	2
	.global battlegymMap		@ 4096 unsigned chars
	.hidden battlegymMap
battlegymMap:
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004

	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006
	.hword 0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006
	.hword 0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006
	.hword 0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006

	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0008,0x0009,0x000A,0x000B,0x000C,0x000C,0x000C,0x000C
	.hword 0x000D,0x000E,0x000F,0x0010,0x0007,0x0007,0x0007,0x0007
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0012,0x0013
	.hword 0x0014,0x0015,0x0015,0x0015,0x0015,0x0015,0x0015,0x0015
	.hword 0x0015,0x0015,0x0015,0x0016,0x0017,0x0018,0x0011,0x0011

	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x001A,0x001B
	.hword 0x001C,0x001D,0x001D,0x001D,0x001D,0x001D,0x001D,0x001D
	.hword 0x001D,0x001D,0x001D,0x041C,0x041B,0x041A,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x001E,0x001F,0x0020,0x0021,0x0022,0x0022,0x0022,0x0022
	.hword 0x0421,0x0420,0x041F,0x041E,0x0019,0x0019,0x0019,0x0019

	.hword 0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023
	.hword 0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023
	.hword 0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023
	.hword 0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019

	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0024,0x0025,0x0026,0x0027,0x0028,0x0029,0x0029
	.hword 0x0029,0x0029,0x0428,0x002A,0x002B,0x0425,0x0424,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002

	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004

	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006
	.hword 0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006,0x0006
	.hword 0x0006,0x0006,0x002D,0x002E,0x002E,0x002E,0x002E,0x002E
	.hword 0x002E,0x002E,0x002E,0x002E,0x002E,0x002E,0x002E,0x002E

	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x002F,0x0030,0x0030,0x0030,0x0030,0x0030
	.hword 0x0030,0x0030,0x0030,0x0030,0x0030,0x0030,0x0030,0x0030
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011

	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019

	.hword 0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023
	.hword 0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023
	.hword 0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023
	.hword 0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023,0x0023
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019

	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019
	.hword 0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019,0x0019

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C
	.hword 0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C,0x002C

	.section .rodata
	.align	2
	.global battlegymPal		@ 32 unsigned chars
	.hidden battlegymPal
battlegymPal:
	.hword 0x0000,0x2B58,0x3B9B,0x4718,0x1DEF,0x2A74,0x39EA,0x4A6D
	.hword 0x5AF1,0x6B76,0x7BDD,0x7399,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(battlegym)