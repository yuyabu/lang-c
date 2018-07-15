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

  free(p);
  //free(vp);
  // 間違えて、同じアドレスを指している変数を２回freeしてしまった。
  // その時のエラーを記念に残しておく
  // a.out(20725,0x7fffad00f380) malloc: *** error for object 0x7f8ebd402710: pointer being freed was not allocated
  // *** set a breakpoint in malloc_error_break to debug
  // Abort trap: 6
  //

  char localv = 'c';
  //free(&localv);
  //ローカル変数をfreeした結果。
  // a.out(20787,0x7fffad00f380) malloc: *** error for object 0x7ffee5ed7ab7: pointer being freed was not allocated
  // *** set a breakpoint in malloc_error_break to debug
  // Abort trap: 6
  //

  char *str1 = "hello";
  char *str2 = " world ";
  p = malloc(strlen(str1)+1);

  char* p2 = malloc(4);
  p2 = "tst";

  printf("addr p is %p\n",p);
  printf("addr p2 is %p\n",p2);


  strcpy(p,str1);
  puts(p);//hello

  //なぜか入れても抜いても同じ結果になる。
  //p = realloc(p,strlen(str1)+ strlen(str2) +1);

  strcat(p,str2);
  puts(p);//hello world;

  free(p);


}
