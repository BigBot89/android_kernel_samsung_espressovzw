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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x94c8457c, "module_layout" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xad4ed11a, "dev_get_flags" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x7b6646bb, "_raw_read_lock" },
	{ 0xf91c9c24, "dst_release" },
	{ 0x3b502f70, "_raw_spin_lock_bh" },
	{ 0x9a9a80bf, "interruptible_sleep_on" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xdb24b90, "remove_proc_entry" },
	{ 0xce19bac5, "register_inet6addr_notifier" },
	{ 0x90ac3102, "dev_base_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37f86f11, "init_timer_key" },
	{ 0xa6005e04, "nf_register_hook" },
	{ 0xa7c0d3f4, "skb_realloc_headroom" },
	{ 0x5876c5ac, "in_dev_finish_destroy" },
	{ 0x75d4e341, "dst_alloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe863a8bf, "skb_trim" },
	{ 0x762eee6e, "netif_rx" },
	{ 0x41bb2eaf, "__pskb_pull_tail" },
	{ 0xfc6e8775, "__init_waitqueue_head" },
	{ 0x538383c0, "unregister_inet6addr_notifier" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xf9295f1b, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xa58dee99, "_raw_write_unlock" },
	{ 0xd702e480, "_raw_read_unlock" },
	{ 0xe52592a, "panic" },
	{ 0x937996f2, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x1e314f3, "register_netdev" },
	{ 0x167c239b, "skb_push" },
	{ 0x1ea06663, "_raw_write_lock" },
	{ 0xd78b46bc, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb37baee3, "add_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf0d38592, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb6da6627, "dev_kfree_skb_any" },
	{ 0xc3c24030, "module_put" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xffddfdc0, "ip_route_input_common" },
	{ 0xdbaaee55, "__alloc_skb" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xc73dd955, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xdf06fa58, "alloc_netdev_mqs" },
	{ 0x2f5bea4d, "eth_type_trans" },
	{ 0x741bf798, "create_proc_entry" },
	{ 0x8ee69235, "timeval_to_jiffies" },
	{ 0x693c2139, "ether_setup" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{  0xf1338, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x882b1e6, "nf_unregister_hook" },
	{ 0x83493b40, "nf_afinfo" },
	{ 0x2f9d28ac, "in6_dev_finish_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a70f20, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x94ddc0d7, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x34e3187e, "skb_put" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

