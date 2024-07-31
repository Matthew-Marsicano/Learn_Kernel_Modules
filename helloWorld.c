/*  
 *  Hello World! This is the simplest format of a Linux Kernel Driver
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

// Load the module
int init_module(void)
{
	printk(KERN_INFO "Hello world 1.\n");

	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	return 0;
}

// Unload the module
void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world 1.\n");
}
