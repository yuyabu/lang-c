

#include<stdio.h>
void sub1(char *arg);
void sub2(char arg[]);
void sub3(char *arg[]);

int main()
{
    char str[] = {"1234"};
    sub1(str);
    sub2(str);
    char *pStr = str;
    sub3(&pStr);
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
