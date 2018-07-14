#include<stdio.h>

void func1();
void func2(char *str);

int main(){
  void(*p)();
  p = func1;
  p();

  p = func2;
  p("引数付きのfunc2()が呼ばれました。");
  
}

void func1(){
  puts("引数なしのfunc1が呼ばれました");
}
void func2(char *str){
  puts(str);
}
