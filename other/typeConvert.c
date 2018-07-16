#include<stdio.h>
void func1(){
  puts("引数なしのfunc1が呼ばれました");
}
void func2(char *str){
  puts(str);
}

void voidf(void){
  puts("引数を渡すとエラーになる関数が呼ばれました");
}


int intfunc(){
  return 3;
}
int intfunc2(int i){
  int result = i+3;
  printf("%d\n",result);
  return result;
}


int main(){

  {
    //引数なし、返値なしの関数の場合
    void (*fp)(void) = func1;//この宣言代入がもっともふさわしい
    fp();
    fp(2);//エラー void型の関数の引数にintを渡したため

    //関数ポインタの型を不適切なものにする
    int(*fp2)(int a) = func1;//警告がでる

    //関数ポインタの宣言時の引数の個数にふさわしく無い呼び出しをすると、
    //fp2();//コンパイルエラー
    // error: too few arguments to function call, expected 1,
    //   have 0
    // fp2();

    //関数ポインタの宣言時の引数にふさわしい引数を与えているが、代入した関数には引数はない
    //void func1();

    //一見不正なことをしているように見えるが、そもそも引数の指定が無い関数には引数を与えて呼び出すこともできる
    func1(1);//ただし警告は出る
    // other/typeConvert.c:44:12: warning: too many arguments in call to 'func1'
    // func1(1);
    // ~~~~~  ^

    //この挙動が気に入らないなら、関数ポインタの引数としてvoidを定義すれば良い。

    //ちなみに関数ポインタの宣言で引数が決められている場合は、代入する関数の引数がvoidであっても、
    //引数を与えて呼び出すことができてしまう。
    //void voidf(void)
    void (*fp3)(int a) = voidf;//ただしこの代入は警告が出る
    // warning: incompatible pointer types initializing
    //   'void (*)(int)' with an expression of type 'void (void)'
    //   [-Wincompatible-pointer-types]
    // void (*fp3)(int a) = voidf;
    //        ^             ~~~~~

    fp3(1);

    //防ぐには代入する関数の引数をvoidにして、関数ポインタの引数もvoidに、そしてコンパイラの警告オプションを最大にすることが重要。


  }

}
