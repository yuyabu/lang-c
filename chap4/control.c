#include<stdio.h>

/**
 * 九九を計算して表示する
 * 引数limitの数字に到達した時点で処理をやめる
 * @param limit [description]
 */
void nine_nine(int limit){
  for(int i=1;i<10;i++){
    for(int j=1;j<10;j++){

      int result = i*j;

      printf("%d\t",result);

      if(result==limit){
        goto last;
      }
    }
    printf("\n");
  }

  last:
  printf("\n");
}

int main(){
  printf("1\n");

  goto last;
  printf("2\n");

  last:

  printf("3\n");

  //結果
  //1
  //3

  nine_nine(64);

}
