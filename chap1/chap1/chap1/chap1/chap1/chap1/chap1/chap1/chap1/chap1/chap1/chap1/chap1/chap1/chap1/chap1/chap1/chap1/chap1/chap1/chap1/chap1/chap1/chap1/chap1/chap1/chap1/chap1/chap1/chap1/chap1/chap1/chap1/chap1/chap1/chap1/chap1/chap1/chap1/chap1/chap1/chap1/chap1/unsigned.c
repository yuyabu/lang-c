#include<stdio.h>
void main(){

	printf("unsigned short size is %lu\n",sizeof(unsigned short));
	printf("short size is %lu\n",sizeof(short));
	
	unsigned short us=0xffff;
	short s=0xffff;


	printf("unsigned short 0xff is %d\n",us);//65536
	printf("short 0xff is %d\n",s);//-1

	//if print unsigned number, use%u
	unsigned int ui = 3000000000;
	
	printf("int ui with %%d is %d\n",ui); //-1294967296
	printf("int ui with %%u is %u\n",ui); //3000000000
}
