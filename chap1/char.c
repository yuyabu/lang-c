#include<stdio.h>

main(){
	char c = 'a';
	int num = 97;
	
	printf("char a with %%d is %d\n",c);//a
	printf("char a with %%c is %c\n",c);//97
	
		
	printf("int 97 with %%d is %d\n",num);//a
	printf("int 97 with %%c is %c\n",num);//97

	//we can use char to calcrate
	char a,b;
	a=20;
	b=6;
	printf("%d\n",a*b);//120
}	
