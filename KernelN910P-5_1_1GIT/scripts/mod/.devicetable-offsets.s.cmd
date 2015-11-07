cmd_scripts/mod/devicetable-offsets.s := /home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/scripts/gcc-wrapper.py /home/friedrich420/kernel/arm-eabi-5.2-A15/bin/arm-eabi-gcc -Wp,-MD,scripts/mod/.devicetable-offsets.s.d  -nostdinc -isystem /home/friedrich420/kernel/arm-eabi-5.2-A15/bin/../lib/gcc/arm-linux-gnueabi/5.2.x-sabermod/include -I/home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/include/uapi -Iinclude/generated/uapi -include /home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Wno-unused-value -Werror-implicit-function-declaration -Wno-uninitialized -Wno-format-security -Wno-array-bounds -Wno-unused-variable -Wno-unused-function -Wno-sequence-point -Wno-switch -Wno-switch-bool -Wno-switch-enum -Wno-logical-not-parentheses -fno-aggressive-loop-optimizations -fno-delete-null-pointer-checks -fno-pic -Wno-maybe-uninitialized -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-a15 -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(devicetable_offsets)"  -D"KBUILD_MODNAME=KBUILD_STR(devicetable_offsets)" -fverbose-asm -S -o scripts/mod/devicetable-offsets.s scripts/mod/devicetable-offsets.c

source_scripts/mod/devicetable-offsets.s := scripts/mod/devicetable-offsets.c

deps_scripts/mod/devicetable-offsets.s := \
  include/linux/kbuild.h \
  include/linux/mod_devicetable.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc5.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/arch/arm/include/uapi/asm/posix_types.h \
  /home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/include/uapi/asm-generic/posix_types.h \
  include/linux/uuid.h \
  include/uapi/linux/uuid.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/friedrich420/kernel/arm-eabi-5.2-A15/lib/gcc/arm-linux-gnueabi/5.2.x-sabermod/include/stdarg.h \
  include/uapi/linux/string.h \
  /home/friedrich420/kernel/note4/KernelN910P-5_1_1SOURCE4_LINUXUPDATES/arch/arm/include/asm/string.h \

scripts/mod/devicetable-offsets.s: $(deps_scripts/mod/devicetable-offsets.s)

$(deps_scripts/mod/devicetable-offsets.s):
