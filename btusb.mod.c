#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9d35aeec, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x561ed4e1, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xcca0be3c, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2b626cd6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x588e2a16, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xed8a271a, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0x2349e0b5, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x41acfa54, __VMLINUX_SYMBOL_STR(btbcm_setup_apple) },
	{ 0x5037e40b, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xe1b52b05, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0x5e3c0bdd, __VMLINUX_SYMBOL_STR(btbcm_setup_patchram) },
	{ 0x1c7c62d5, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x7c08b8a4, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x5c786252, __VMLINUX_SYMBOL_STR(btrtl_setup_realtek) },
	{ 0xdf16c978, __VMLINUX_SYMBOL_STR(btintel_set_diag) },
	{ 0xd55edb82, __VMLINUX_SYMBOL_STR(btintel_hw_error) },
	{ 0x92b914a4, __VMLINUX_SYMBOL_STR(btintel_set_bdaddr) },
	{ 0x9fede806, __VMLINUX_SYMBOL_STR(btintel_set_diag_mfg) },
	{ 0x425431ee, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc9e537a9, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x51458be7, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x66c66f48, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5ea7ece6, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe7822b34, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0x531e235e, __VMLINUX_SYMBOL_STR(btintel_set_event_mask) },
	{ 0x757108ec, __VMLINUX_SYMBOL_STR(btintel_load_ddc_config) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc5f16f05, __VMLINUX_SYMBOL_STR(btintel_secure_send) },
	{ 0x9483f2e0, __VMLINUX_SYMBOL_STR(btintel_version_info) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x6d483b, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x55fe4565, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbef9cbf0, __VMLINUX_SYMBOL_STR(__hci_cmd_sync_ev) },
	{ 0x4fcfe57b, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6b961a6c, __VMLINUX_SYMBOL_STR(btintel_check_bdaddr) },
	{ 0x92160891, __VMLINUX_SYMBOL_STR(btintel_set_event_mask_mfg) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x2d493cff, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x75e4b898, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbd86b127, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0x44d06b4, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x26c2e913, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95e5793f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8e354a18, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x8b65a5fb, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x69125fca, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xc388ee18, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x809dd6c4, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2142697b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8a9809d6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe7985cd8, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x2810cbaf, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd5ac7f96, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x2da1b27c, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,btbcm,btrtl,btintel";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8143d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105BpE065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "174394731F7A1A343461DC1");
