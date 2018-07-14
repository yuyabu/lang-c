#include<stdio.h>

void func1();
void func2(char *str);
int intfunc();
int intfunc2(int i);

int main(){
  void(*p)();
  p = func1;
  p();

  p = func2;
  p("引数付きのfunc2()が呼ばれました。");

  void(*p2)(char *s);
  p2 = func2;
  p2("test");

  p2 = func1;//定義は成功してしまう！！！！
  //p2();呼び出すとエラー！
  /**
   * $ gcc -w -Wall chap5/functionp.c
   * chap5/functionp.c:19:6: error: too few arguments to function call, expected 1,
   * have 0
   * p2();
   * ~~ ^
   * 1 error generated.
   */

   p2("test");//func1は引数なしだが、引数付きで呼ぶというデタラメなことはコンパイル可能。
   p2(1);//ポインタの型宣言の引数と一致していない型の引数でもコンパイル・実行可能なようだ。

   //void(*p)();
   p= intfunc;
   p();           //これは実行可能
   //int i = p(); //これは実行できない
   //pの関数ポインタの戻り値の型がvoidなため

   p= intfunc2;
   p(4);


}

void func1(){
  puts("引数なしのfunc1が呼ばれました");
}
void func2(char *str){
  puts(str);
}
int intfunc(){
  return 3;
}
int intfunc2(int i){
  int result = i+3;
  printf("%d\n",result);
  return result;

}
