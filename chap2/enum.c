#include<stdio.h>

typedef enum
{
  SUCCESS,FAILURE
}Result;

/**
 * print divided result.
 *
 * @param  dividend [description]
 * @param  divisor  [description]
 * @return          [description]
 */
Result divide(int dividend,int divisor){

  if(b==0){
    return FAILURE;
  }

  printf("calc result is %d\n",dividend / divisor);
  return SUCCESS;
}

int main(){
  Result result = divide(6,0);
  if(result == FAILURE){
    printf("divide is fail\n");
  }
  printf("success num is %d\n",SUCCESS);
  printf("failure num is %d\n",FAILURE);
}
