#include<stdio.h>

int main(int args,char *argv[]){

  int num = printf("test\n");
  printf("%d\n",num);//5

  printf("%d\n",test(5));
  test2();
}

/**
 * int型の関数は宣言じに引数を省略できる。
 */
test(a){
  return 3+a;
}

int test2(){
  printf("test\n");
}
