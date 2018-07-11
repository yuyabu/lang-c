#include <stdio.h>
typedef struct{
    //unsigned al:8;
    char al;
    //unsigned ah:8;
    char ah;

} ax_8bit;

typedef union {
    //unsigned ax:16
    short ax;
    ax_8bit _8bit;
} ax;
typedef union{
    //unsigned eax:32
    int eax;
    ax axpart;
}eax;

int main(void){

    //axの実験
    ax ax1 = { 0x3fe4 };
    printf("ax1 is %x\n" , ax1          );
    printf("al  is %x\n" , ax1._8bit.al );//e4
    printf("ah  is %x\n" , ax1._8bit.ah );//3f

    //eaxの実験
    eax eax1 = { 0x1d2c65b8 };

    printf("eax is 0x%x\n"       ,eax1.eax             );
    printf("ax  is 0x    %x\n"   ,eax1.axpart.ax       );
    printf("al  is 0x      %x\n" ,eax1.axpart._8bit.al );
    printf("ah  is 0x    %x\n"   ,eax1.axpart._8bit.ah );

    printf("eax addr is %p\n" ,&eax1              );
    printf("eax addr is %p\n" ,&eax1.eax          );
    printf("ax  addr is %p\n" ,&eax1.axpart       );
    printf("ax  addr is %p\n" ,&eax1.axpart.ax    );
    printf("ax  addr is %p\n" ,&eax1.axpart._8bit );
    printf("ah  addr is %p\n" ,&eax1.axpart._8bit.ah );
    printf("al  addr is %p\n" ,&eax1.axpart._8bit.al );

}
