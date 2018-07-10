#include<stdio.h>

void test(int *p){
  int n = {3,4,5,6,7};
  p = n;
}
void test2(int array[]){
  *array = 320;
  printf("array[0] is %d\n",array[0]);
}

void func1(int array[3][5]){
  puts(array);
  puts(array[1]);
}
void func2(int array[][5]){
  puts(array);
  puts(array[1]);
}
void func3(int *array){
  puts(array);
  puts(array[1]);
}


void main(){
  int n[5]={0,1,2,3,4};

  test(n);
  for(int i=0;i<5;i++){
    printf("%d ",n[i]);
    //0 1 2 3 4
  }

  printf("\n--------\n");

  for(int i=0;i<5;i++){
    //配列はポインタなのでアドレスを使ってもアクセスできる
    printf("%d ",*(n+i));
    //0 1 2 3 4
  }

  printf("\n--------\n");

  //配列のポインタに対する加算はそのバイト長だけアドレスが伸びる。
  int i[5];
  short s[5];

  //intは4づつ伸びる
  printf("i addr is %p\n",i);     //0x7ffee7fa6a90
  printf("i+1 addr is %p\n",i+1); //0x7ffee7fa6a94

  //shortは2づつ伸びる
  printf("s addr is %p\n",s);     //0x7ffee878ea86
  printf("s+1 addr is %p\n",s+1); //0x7ffee878ea88

  test2(n);

  //配列の順番に注意しろ
  //この形式はOK。長さ５の文字列が３つ
  char color[3][5] = {
    "Blue","Gray","Ping"
  };

  //これはNG
  char color2[5][3] = {
    "Blue","Gray","Ping"
  };
  /*
  int
chap2/array.c:52:5: warning: initializer-string for char array is too long
    "Blue","Gray","Ping"
    ^~~~~~
chap2/array.c:52:12: warning: initializer-string for char array is too long
    "Blue","Gray","Ping"
           ^~~~~~
chap2/array.c:52:19: warning: initializer-string for char array is too long
    "Blue","Gray","Ping"
                  ^~~~~~
    */
   //ただしコンパイルはできた。

   puts(color);//blue
   puts(color[0]);//blue

   puts(color[1]);//Gray
   puts(color+1); //Gray

   printf("size of color is %d\n",sizeof color);
   //size of color is 15

   func1(color);
   func2(color);
   func3(color);
}
