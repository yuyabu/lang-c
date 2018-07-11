#include<stdio.h>

struct Person
{
  char name[15];
  int age;
};

void main(){
  struct Person person;
  strcpy(person.name,"jhon");
  person.age = 11;

  printf("name is %s\n",person.name);
  printf("age is %d\n",person.age);

  //char(1Byte)*15 + int(4Byte)で19Byteとなりそうだが、20が表示される。
  //これはワードアライメントと呼ばれるもので、構造体のサイズを偶数にするものである。
  printf("struct Person size is %d\n",sizeof(struct Person)); //20
  printf("struct person size is %d\n",sizeof person);         //20




}
