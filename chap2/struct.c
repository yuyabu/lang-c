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

}
