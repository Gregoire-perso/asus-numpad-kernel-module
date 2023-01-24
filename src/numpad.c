#include <linux/module.h>
#include <linux/init.h>

/* Meta information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Grégoire Lefaure");
MODULE_DESCRIPTION("Asus Numpad Driver");

static int __init FindNumpadType(void) {
    // Find a way to find the numpad layout
    return 0;
}

static void __exit ModuleExit(void) {

}

module_init(FindNumpadType);
module_exit(ModuleExit);

