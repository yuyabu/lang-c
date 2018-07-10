#include <stdio.h>
int main(void){
    // Your code here!
    //各型に対応したポインタがある
    int i = 50;
    int* pi=&i;

    char c = 'c';
    char* pc = &c;

    double d = 1.0;
    double *pd = &d;

    //サイズはすべて同じ。8Byte
    printf("int    pointer size is %d\n",sizeof pi);
    printf("char   pointer size is %d\n",sizeof pc);
    printf("double pointer size is %d\n", sizeof pd);

    //ポインタ型のポインタというものもある

    //char型のポインタ型のポインタ
    char **ppc = &pc;

    printf("-------------------\n");
    printf("c value is %x\n",c); //63 = asciiで'c'
    printf("pc value is %x\n",pc);
    printf("ppc value is %x\n",ppc);

    printf("-------------------\n");
    printf("c addr(&c) is %x\n",&c);
    printf("pc addr(&pc) is %x\n",&pc);
    printf("ppc addr(&ppc) is %x\n",&ppc);

    printf("-------------------\n");
    printf("c reference is nothing\n");
    printf("pc reference(*pc) is %x\n",*pc);
    printf("ppc reference(*ppc) is %x\n",*ppc);

    printf("-------------------\n");
    printf("ppc referencese reference(**ppc) is %x\n",**ppc);







}
