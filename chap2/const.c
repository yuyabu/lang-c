#include<stdio.h>


void foo(char *p, const int length){
//	length =5;//error: cannot assign to variable 'length' with const-qualified type 'const int'
}

void test(const char* memo){
//	*memo = "change";//error: read-only variable is not assignable
	
}
void test2(const char*memo){
	memo = "change";
	printf(memo);//change
}

void adressDefence(char *const memo){
	memo = "change";//error: cannot assign to variable 'memo' with const-qualified type 'char *const'
}
void main(){
	char *str = "test";
	adressDefence(str);
}
