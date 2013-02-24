	.file	"gen_tlsdesc.c"
	.text
	.align	4
	.global	dummy
	.type	dummy, @function
dummy:
	entry	sp, 32
#APP
# 8 "libpthread/nptl/sysdeps/xtensa/gen_tlsdesc.c" 1
	@@@name@@@TLSDESC_ARG@@@value@@@0@@@end@@@
# 0 "" 2
# 9 "libpthread/nptl/sysdeps/xtensa/gen_tlsdesc.c" 1
	@@@name@@@TLSDESC_GEN_COUNT@@@value@@@8@@@end@@@
# 0 "" 2
# 10 "libpthread/nptl/sysdeps/xtensa/gen_tlsdesc.c" 1
	@@@name@@@TLSDESC_MODID@@@value@@@0@@@end@@@
# 0 "" 2
# 11 "libpthread/nptl/sysdeps/xtensa/gen_tlsdesc.c" 1
	@@@name@@@TLSDESC_MODOFF@@@value@@@4@@@end@@@
# 0 "" 2
#NO_APP
	retw.n
	.size	dummy, .-dummy
	.ident	"GCC: (Buildroot 2013.02-rc1-00002-g6056de8-dirty) 4.6.3"
