#include<stdio.h>

typedef enum
{
  SUCCESS,FAILURE
}Result;

enum defaultEnum{test,test1,test2};
// Largest value is 8-bit integer
enum int8Enum  {int8Val1 =0x01, int8Val2 =0x02, int8Val3 =0xF1 };

// Largest value is 16-bit integer
enum int16Enum {int16Val1=0x01, int16Val2=0x02, int16Val3=0xFFF1 };

// Largest value is 32-bit integer
enum int32Enum {int32Val1=0x01, int32Val2=0x02, int32Val3=0xFFFFFFF1 };

// Largest value is 64-bit integer
enum int64Enum {int64Val1=0x01, int64Val2=0x02, int64Val3=0xFFFFFFFFFFFFFFF1 };

//コンパイルできず
enum int128Enum{test3=0x01,test4=0x02,int128Val=0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF1};

/**
 * print divided result.
 *
 * @param  dividend [description]
 * @param  divisor  [description]
 * @return          [description]
 */
Result divide(int dividend,int divisor){

  if(divisor==0){
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

  printf("size of enum member is %lu\n",sizeof (Result));

  printf("size of default    is %zd\n", sizeof (enum defaultEnum));
  printf("size of int8Enum   is %zd\n", sizeof (enum int8Enum));
  printf("size of int16Enum  is %zd\n", sizeof (enum int16Enum));
  printf("size of int32Enum  is %zd\n", sizeof (enum int32Enum));
  printf("size of int64Enum  is %zd\n", sizeof (enum int64Enum));
  //printf("size of int128Enum is %zd\n", sizeof (enum int128Enum));


}
