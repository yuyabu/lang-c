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
  free(&localv);

}
