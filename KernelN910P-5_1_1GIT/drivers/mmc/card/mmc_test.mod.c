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
	{ 0x68aa768b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x976cdadf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x85440b91, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x800bd018, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0x334855f7, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x8371daff, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x6c0c0447, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0x5a79da2d, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xfa738b04, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xf3e891e, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x1983bc72, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbcc8b4e7, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0xe8468a17, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0xf23a9664, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x5d8d0dd3, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0x3b1de11d, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xaa0a0ec2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2c9045af, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x136d88ec, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xcb3a734a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf1a983e1, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51249c28, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7c8996ca, __VMLINUX_SYMBOL_STR(mmc_rpm_release) },
	{ 0x6e43efa, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0x6cfa9126, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1ccb368d, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0x1d69a1b3, __VMLINUX_SYMBOL_STR(mmc_rpm_hold) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1342fde5, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd75c16b, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0xefa55090, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0x7c803eea, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x543aa8f9, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe151b703, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xda419856, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc9d4a4, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

