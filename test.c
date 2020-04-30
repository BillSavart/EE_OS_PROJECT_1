#include<syscall.h>
#include<stdio.h>

int main(void){	
	printf("syscall %d\n", syscall(335));
	return 0;
}
