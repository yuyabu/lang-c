#include <stdio.h>
int main(void){
    int a =-1;
    printf("%d\n",a);

    char *judge_result = 0!= (a>0? a: 0)? "正の数":"0か負の数";

    //奇妙にみえるが以下と同じ意味

    //int fixed_number = a>0? a: 0;
    //char *judge_result = 0!= fixed_number ? "正の数":"0か負の数";

    printf("%s\n",judge_result);


}
