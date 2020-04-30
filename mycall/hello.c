#include<linux/kernel.h>

asmlinkage int sys_hello(void){
	printk("This is a new syscall\n");
	return 0;
}
