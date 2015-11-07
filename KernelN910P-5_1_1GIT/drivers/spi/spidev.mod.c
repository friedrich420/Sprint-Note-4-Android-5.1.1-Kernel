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
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5bab7501, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x942ba33f, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x1021ea03, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x3a655e77, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x6197bbe5, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0xe50171cc, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0x7613441, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xc719f939, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x6003b834, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x97e2910a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x5f5fbfab, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xa51fcce1, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xa2491e32, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa5344e82, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcb3a734a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9a8ba581, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc1f5e7c8, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xf4fb2aa4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6cfa9126, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9dec3162, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x8d96b647, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8a669fd9, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xda419856, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc9d4a4, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crohm,dh2228fv*");
