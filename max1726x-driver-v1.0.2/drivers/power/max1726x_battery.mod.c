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

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x3c98d0cd, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9460f717, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x14a68f4f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x715354e0, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0xdefc71f5, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8dd1990a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9c6356c2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x621459c5, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x95b6d277, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xa054af2e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x38ccffd4, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xc30757f6, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x986b4bd6, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x8a1a2e95, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x4758f3af, __VMLINUX_SYMBOL_STR(of_property_read_variable_u16_array) },
	{ 0x1c12ea57, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xceeb1f20, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe973b0f5, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0x896c2ae6, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xf6631bb4, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8073fbb4, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x6a09cab9, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0xfb97986a, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:max1726x");
MODULE_ALIAS("of:N*T*Cmaxim,max1726x");
MODULE_ALIAS("of:N*T*Cmaxim,max1726xC*");
