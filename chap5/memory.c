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

  char *vp1 = malloc(1);
  char *vp2 = malloc(1);
  char *vp3 = malloc(1);
  char *vp4 = malloc(1);
  char *vp5 = malloc(1);
  char *vp6 = malloc(1);

  //１バイトしか確保していない領域に複数バイト分の文字を書き込み
  //文字列リテラルはそれ自体が静的データへのアドレスなので以下のコードは実験としてふさわしくない
  //vp1 = "test";
  strcpy(vp1,"testtesttesttesttesttesttesttest");
  strcpy(vp2,"computercomputercomputercomputer");
  strcpy(vp3,"abcdeabcdeabcdeabcdeabcdeabcde");
  strcpy(vp4,"englishenglishenglishenglishenglish");
  strcpy(vp5,"boyboyboyboyboyboyboyboyboyboy");
  strcpy(vp6,"girlgirlgirlgirlgirlgirlgirlgirlgirl");


  puts(vp1);
  puts(vp2);
  puts(vp3);
  puts(vp4);
  puts(vp5);
  puts(vp6);
  //結果：データ破壊ができた
  // bcdeabcdeabcde
  // computercomputerabcdeabcdeabcdeabcdeabcdeabcde
  // abcdeabcdeabcdeabcdeabcdeabcde
  // englishenglishenboyboyboyboyboybgirlgirlgirlgirlgirlgirlgirlgirlgirl
  // boyboyboyboyboybgirlgirlgirlgirlgirlgirlgirlgirlgirl
  // girlgirlgirlgirlgirlgirlgirlgirlgirl


  printf("vp1 addr is %p\n",vp1);
  printf("vp1 value is %c\n",*vp1);

  printf("vp2 addr is %p\n",vp2);
  printf("vp2 value is %c\n",*vp2);

  printf("vp3 addr is %p\n",vp3);
  printf("vp3 value is %c\n",*vp3);

  printf("vp4 addr is %p\n",vp4);
  printf("vp4 value is %c\n",*vp4);

  printf("vp5 addr is %p\n",vp5);
  printf("vp5 value is %c\n",*vp5);

  printf("vp6 addr is %p\n",vp6);
  printf("vp6 value is %c\n",*vp6);

  //出力
  // vp1 addr is 0x7fc072402730
  // vp1 value is b
  // vp2 addr is 0x7fc072402710
  // vp2 value is c
  // vp3 addr is 0x7fc072402720
  // vp3 value is a
  // vp4 addr is 0x7fc072402750
  // vp4 value is e
  // vp5 addr is 0x7fc072402760
  // vp5 value is b
  // vp6 addr is 0x7fc072402770
  // vp6 value is g




}
