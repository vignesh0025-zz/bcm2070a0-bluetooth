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
	{ 0xc0554ace, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1227dcd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8b5a2298, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9298a84f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf48d00a, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x5cf320f1, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0xda95cfcb, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0x8bf975c0, __VMLINUX_SYMBOL_STR(btbcm_setup_patchram) },
	{ 0x96934e41, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x79c4d289, __VMLINUX_SYMBOL_STR(btbcm_setup_apple) },
	{ 0xc217016f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x836e33fe, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xf7ead458, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x8cbe000a, __VMLINUX_SYMBOL_STR(btrtl_setup_realtek) },
	{ 0x5d252b95, __VMLINUX_SYMBOL_STR(btintel_set_diag) },
	{ 0x9f1f5b73, __VMLINUX_SYMBOL_STR(btintel_hw_error) },
	{ 0x628c45a6, __VMLINUX_SYMBOL_STR(btintel_set_bdaddr) },
	{ 0x59333f70, __VMLINUX_SYMBOL_STR(btintel_set_diag_mfg) },
	{ 0x4164179d, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x35634a9, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x53a5cbdc, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x611fb636, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf6b33ea4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe7822b34, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0x90df4324, __VMLINUX_SYMBOL_STR(btintel_set_event_mask) },
	{ 0x11266cd6, __VMLINUX_SYMBOL_STR(btintel_load_ddc_config) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xa11fd050, __VMLINUX_SYMBOL_STR(btintel_secure_send) },
	{ 0xf4348c01, __VMLINUX_SYMBOL_STR(btintel_version_info) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xd0a6404f, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x9a89e6c3, __VMLINUX_SYMBOL_STR(btintel_exit_mfg) },
	{ 0xca603206, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd6da6d8e, __VMLINUX_SYMBOL_STR(btintel_check_bdaddr) },
	{ 0xb1bf3b2d, __VMLINUX_SYMBOL_STR(btintel_set_event_mask_mfg) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6c6e47f4, __VMLINUX_SYMBOL_STR(__hci_cmd_sync_ev) },
	{ 0x974e2a, __VMLINUX_SYMBOL_STR(btintel_enter_mfg) },
	{ 0x847bd342, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x44ab61d3, __VMLINUX_SYMBOL_STR(btintel_read_version) },
	{ 0xc987f499, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xffe88fb5, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbd86b127, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xa9f11853, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x3794082e, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f177d3d, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7e63b8a5, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x1f7af7ef, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0xfad9ce10, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x2853f664, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xae6cf6c4, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xfce9c1cd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb126a983, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9e5c61d8, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x849c6601, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3334cc0, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x14f4c1bb, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
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
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BBD0F8D1D7F69A007774F6F");
