#include<linux/kernel.h>
#include<linux/syscalls.h>
SYSCALL_DEFINE0(sys_hello){
	printk(KERN_INFO "This is a new syscall, Hello\n");
	return 0;
}
