

#include<stdio.h>
void sub1(char *arg);
void sub2(char arg[]);
void sub3(char *arg[]);
void sub4();
void sub5(void);
int main()
{
  {
    char str[] = {"1234"};
    sub1(str);
    sub2(str);
    char *pStr = str;
    sub3(&pStr);
    sub4();
    sub5();

    sub4(1);
    //sub5(1);//コンパイルエラー

    // $ gcc -w -Wall other/special.c
    // other/special.c:20:10: error: too many arguments to function call, expected 0,
    //       have 1
    //     sub5(1);
    //     ~~~~ ^
    // other/special.c:8:1: note: 'sub5' declared here
    // void sub5(void);
    // ^
    // 1 error generated.
  }

  {
    char *s =1;
  }



   return 0;
}
void sub1(char *arg)
{
    printf(arg);
    printf("\t");
    printf(arg+1);
    printf("\n");
}
void sub2(char arg[])
{
    printf(arg);
    printf("\t");
    printf(arg+2);
    printf("\n");
}
void sub3(char **arg)
{

    printf(*arg);
    printf("\t");
    printf(*arg+3);
    printf("\n");
  /*
  printf(arg);
  printf("\t");
  printf(arg+3);
  printf("\n");
  */
}
void sub4(){

}
void sub5(void){

}
