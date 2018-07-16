#include<stdio.h>
//defineで値を定義
#define bignumber 1000

//マクロを定義
#define max(a,b) (a >b)? a: b

int main(){
  int a = bignumber;
  printf("%d is larger\n", max(100,10));
  printf("%d\n",a);
  printf("%d\n",bignumber);
  {
    int a=5,b=4;
    printf("%d\n",max(a, ++b));
  }
  {
    printf("largeer + 100=%d\n",max(20,10)+100);
  }
  {
    # undef max
    # define max 5
    printf("%d\n",max);
    # undef max
    #define max 10
    printf("%d\n",max);
  }
//  #define FLAG
  #ifdef FLAG
    puts("flagがdefineされている");
  #else
    puts("flagがdefineされていない");
  #endif
}
