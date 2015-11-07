#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2790ccd3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x344908d4, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_free) },
	{ 0x3656cb10, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_init) },
	{ 0xac638229, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_close) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2d9d814d, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x629f9d31, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read_user) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xda419856, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7304bb44, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_dispose) },
	{ 0x9c19040b, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_write) },
	{ 0xb2d307de, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x29058320, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf4fb2aa4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf48116c6, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read) },
	{ 0xd389439b, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_start) },
	{ 0x7de2963d, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_next) },
	{ 0xf9d5b27, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_avail) },
	{ 0x56b5db5a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8633f37b, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_flush) },
	{ 0x58ea83a9, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

