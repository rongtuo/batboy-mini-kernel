/*
	这就是内核最开始的地方，也是操作系统开始的地方
*/
#include "common.h"
int main()
{
	init_descriptor_tables();
	monitor_clear();
	//printf("%d",23);
	printf("\n",1);
	printf("hello!\n",0);
	init_timer(10);
	asm volatile ("sti");
	//asm volatile ("int $0x3");
	//init_timer(50);
	return 0;
}