#include<linux/kernel.h>

asmlinkage long sys_hello(void){
	printk("This is a new syscall, Hello\n");
	return 0;
}
