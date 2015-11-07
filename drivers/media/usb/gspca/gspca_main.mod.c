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
	{ 0xcb3a734a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfd141b6b, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd06ea2fe, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x8d96b647, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x82e0848d, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xec2f9768, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x13801fb0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x614a26a0, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x132d750c, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xda419856, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x69067e09, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xffce2fb3, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6f499fcb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_s_ctrl) },
	{ 0x29058320, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf4fb2aa4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf078a28e, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf03a6919, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x4cb0fd1f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xcc9d4a4, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7abb6a40, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x589b082, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xe104d491, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xd932168b, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x72d63463, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xecfbf39b, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xdb5dd4f4, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xacd09a6e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x72f0d984, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3fdcf440, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x6cfa9126, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1060812b, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2c1c6295, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa270be99, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfab1b7bf, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xd1f619f2, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x373ab922, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x8a669fd9, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd74abd59, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xaaf9ae4d, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x1a6c21c0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xc49fd74d, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x5d2159c4, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0xd58151f4, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4DFDEDC74050A350E879D49");
