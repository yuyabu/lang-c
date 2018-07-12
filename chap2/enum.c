#include<stdio.h>

typedef enum
{
  SUCCESS,FAILURE
}Result;

/**
 * print result of calc a/b
 * @param  a [description]
 * @param  b [description]
 * @return b=0 FAILURE
 */
Result divide(int a,int b){

  if(b==0){
    return FAILURE;
  }

  printf("calc result is %d\n",a/b);
  return SUCCESS;
}

int main(){
  Result result = divide(6,0);
  if(result == FAILURE){
    printf("divide is fail\n");
  }

}
