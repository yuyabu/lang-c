#include<stdio.h>

int main(){
  printf("1\n");

  goto last;
  printf("2\n");

  last:

  printf("3\n");

  //結果
  //1
  //3

}
