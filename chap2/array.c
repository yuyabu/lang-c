#include<stdio.h>

void test(int *p){
  int n = {3,4,5,6,7};
  p = n;
}

void main(){
  int n[5]={0,1,2,3,4};

  test(n);
  for(int i=0;i<5;i++){
    printf("%d ",n[i]);
    //0 1 2 3 4
  }
}
