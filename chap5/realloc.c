#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *vp1 = malloc(1);
    char *vp2 = malloc(1);
    char *vp3 = malloc(1);
    char *vp4 = malloc(1);
    char *vp5 = malloc(1);
    char *vp6 = malloc(1);

    char* str1 = "testtesttesttesttesttesttesttest";
    char* str2 = "computercomputercomputercomputer";
    char* str3 = "abcdeabcdeabcdeabcdeabcdeabcde";
    char* str4 = "englishenglishenglishenglishenglish";
    char* str5 = "boyboyboyboyboyboyboyboyboyboy";
    char* str6 = "girlgirlgirlgirlgirlgirlgirlgirlgirl";

    vp1 = realloc(vp1,strlen(str1)+1);
    vp2 = realloc(vp2,strlen(str2)+1);
    vp3 = realloc(vp3,strlen(str3)+1);
    vp4 = realloc(vp4,strlen(str4)+1);
    vp5 = realloc(vp5,strlen(str5)+1);
    vp6 = realloc(vp6,strlen(str6)+1);

    strcpy(vp1,str1);
    strcpy(vp2,str2);
    strcpy(vp3,str3);
    strcpy(vp4,str4);
    strcpy(vp5,str5);
    strcpy(vp6,str6);


    puts(vp1);
    puts(vp2);
    puts(vp3);
    puts(vp4);
    puts(vp5);
    puts(vp6);


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
    // testtesttesttesttesttesttesttest
    // computercomputercomputercomputer
    // abcdeabcdeabcdeabcdeabcdeabcde
    // englishenglishenglishenglishenglish
    // boyboyboyboyboyboyboyboyboyboy
    // girlgirlgirlgirlgirlgirlgirlgirlgirl
    // vp1 addr is 0x7fa623402770
    // vp1 value is t
    // vp2 addr is 0x7fa6234027a0
    // vp2 value is c
    // vp3 addr is 0x7fa6234027d0
    // vp3 value is a
    // vp4 addr is 0x7fa623402810
    // vp4 value is e
    // vp5 addr is 0x7fa6234027f0
    // vp5 value is b
    // vp6 addr is 0x7fa623402710
    // vp6 value is g

}
