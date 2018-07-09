#include<stdio.h>


void foo(char *p, const int length){
//	length =5;//error: cannot assign to variable 'length' with const-qualified type 'const int'
}

void test(const char* memo){
//	*memo = "change";//error: read-only variable is not assignable
	
}
void main(){
	test("test");

}
