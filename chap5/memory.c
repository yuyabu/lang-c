#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(){
  char *p;
  char *str = "Getting memories!!";
  p = (char *) malloc(strlen(str)+1);
  //キャストしなくてもOK
  //p = malloc(strlen(str)+1);
  void* vp = (void*) p;
  printf("void pointer type size is %d\n",sizeof vp);
  strcpy(p,str);
  puts(p);
  puts(vp);

}
