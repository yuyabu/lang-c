#include<stdio.h>
void main(){

	printf("unsigned short size is %lu\n",sizeof(unsigned short));
	printf("short size is %lu\n",sizeof(short));
	
	unsigned short us=0xffff;
	short s=0xffff;


	printf("unsigned short 0xff is %d\n",us);//65536
	printf("short 0xff is %d\n",s);//-1
}
