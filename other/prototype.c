#include<stdio.h>
//void a();
//void b();

void a(){
  b();
}
void b(){
  puts("test");
}
int main(){
  a();
}
