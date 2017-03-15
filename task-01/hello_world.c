/* This is a simple hello-world module for the Eudyptula Challenge.
 * The following references were used:
 *  - http://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html#AEN245
 *  - https://www.gnu.org/software/make/manual/make.html#Rule-Introduction
 *  - https://www.kernel.org/doc/Documentation/kbuild/modules.txt
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kyle Nickel");
MODULE_DESCRIPTION("A simple hello-world module");

static int __init helloInit(void)
{
    printk(KERN_DEBUG "Hello World!\n");
    return 0;
}

static void __exit helloExit(void)
{
    printk(KERN_DEBUG "!dlroW olleH\n");
}

module_init(helloInit);
module_exit(helloExit);
