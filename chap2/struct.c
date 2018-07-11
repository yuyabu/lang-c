#include<stdio.h>

//構造体
struct Person
{
  char name[15];
  int age;
};

//ビットフィールド
struct Registers{
  unsigned int al:4;
  unsigned int ah:4;
  unsigned int cl:4;
  unsigned int ch:4;
};
typedef struct Registers Reg;

void main(){
  struct Person person;
  strcpy(person.name,"jhon");
  person.age = 11;

  printf("name is %s\n",person.name);
  printf("age is %d\n",person.age);

  //char(1Byte)*15 + int(4Byte)で19Byteとなりそうだが、20が表示される。
  //これはワードアライメントと呼ばれるもので、構造体のサイズを偶数にするものである。
  printf("struct Person size is %lu\n",sizeof(struct Person)); //20
  printf("struct person size is %lu\n",sizeof person);         //20

  struct Registers registers;
  registers.al = 0xf;
  registers.ah = 0xe;


  printf("al register is 0x%x\n",registers.al);
  printf("ah register is 0x%x\n",registers.ah);

  printf("size of registers is %lu\n",sizeof registers);//4

  //bitフィールドのメンバのアドレスは参照できない。
  //chap2/struct.c:37:30: error: address of bit-field requested
  //printf("ah adress is %p\n",&registers.ah);
  //bitフィールドを使った構造体のアドレスは取得可能。
  printf("registers adress is %p\n",&registers);

  //type defのサンプル
  Reg reg;
  reg.al = 0xa;
  reg.ah = 0x2;

  printf("al register is 0x%x\n",reg.al);
  printf("ah register is 0x%x\n",reg.ah);


}
