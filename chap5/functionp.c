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

   //引数の実験

   //pの宣言が離れているので一応参考にコメントで示す
   //void(*p)();
   p= intfunc;
   p();           //これは実行可能
   //int i = p(); //これは実行できない
   //pの関数ポインタの戻り値の型がvoidなため

   p= intfunc2;
   p(4);//7が出力される。引数は渡せるっぽい

   //void(*p2)(char *s);
   //p2の宣言が離れているので参考程度にコメントで示す
   p2 = intfunc2;
   intfunc2(3);//6が出力されている。
   //関数ポインタの引数はchar *sで宣言されているのに、intを渡せるのか。

   //宣言のメモ
   // void func1();
   // void func2(char *str);
   // int intfunc();
   // int intfunc2(int i);

   int(*p3[4])(char *output);
   //以下の代入は全て成功する
   p3[0] = func1;
   p3[1] = func2;
   p3[2] = intfunc;
   p3[3] = intfunc2;

   //以下のコンパイルはすべて失敗する
   // p3[0]();
   // p3[1]();
   // p3[2]();
   // p3[3]();

   //コンパイル結果
   // chap5/functionp.c:65:10: error: too few arguments to function call, expected 1,
   //       have 0
   //    p3[0]();
   //    ~~~~~ ^
   // chap5/functionp.c:66:10: error: too few arguments to function call, expected 1,
   //       have 0
   //    p3[1]();
   //    ~~~~~ ^
   // chap5/functionp.c:67:10: error: too few arguments to function call, expected 1,
   //       have 0
   //    p3[2]();
   //    ~~~~~ ^
   // chap5/functionp.c:68:10: error: too few arguments to function call, expected 1,
   //       have 0
   //    p3[3]();
   //    ~~~~~ ^



   p3[0]("123");//出力結果::引数なしのfunc1が呼ばれました
   p3[1]("123");//出力結果:123
   p3[2]("123");
   p3[3]("123");//出力結果:152838021 多分不正に数値にキャストした文字列に3を足した結果。

   int (*testf)(int a,int b);
   testf = func1;
   //testf(); コンパイルエラー
   testf(1,"3"); //コンパイル、実行成功
   testf(1,1);   //コンパイル、実行成功

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
