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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb25600a2, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5a79da2d, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xfa738b04, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x8d96b647, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x23fee123, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7f2f9d16, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0x60ab7d4b, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x64021802, __VMLINUX_SYMBOL_STR(uncached_logk) },
	{ 0x70210630, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x5ce9674c, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x490985c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5b9af78d, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4b0981b, __VMLINUX_SYMBOL_STR(pcie_get_readrq) },
	{ 0x1342fde5, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xaa32a64b, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x57f290b4, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x2c9045af, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5ea8e536, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x18bd76a4, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xe126ba5c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x6a00e3c6, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x139ed636, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf8744f4, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xfb2a7211, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xb1b59611, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xae14a262, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xdf701659, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xf1a983e1, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x84795e13, __VMLINUX_SYMBOL_STR(build_skb) },
	{ 0xc095d1ee, __VMLINUX_SYMBOL_STR(dev_kfree_skb_irq) },
	{ 0xb5121235, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xaa0a0ec2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfe10810c, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x22ce5267, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xf76adcb6, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x9afcd7a5, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xfce8b245, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xd53f7cdc, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9a8ba581, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x51e3b45b, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xac2bb594, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x188a1bf6, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x347c09a9, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xde4f2550, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc4d0fb7f, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x2d9280a6, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xffa7594e, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc64bf7b, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf425ca2d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa8a454ed, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa4a3c462, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x37bb6076, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xd5632749, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc7a38cbb, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0xd8a0b83c, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xab517a6, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc186686b, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x1c7f7765, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x8a669fd9, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xdbbbcb2c, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0xf61c1a65, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0xa2bfda7f, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xddf9f6e5, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001969d00001063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00002060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00002062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001083sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D7C51AE9EAEA06DE7F10568");
