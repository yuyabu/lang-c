#include <stdio.h>

int main(void)
{
    unsigned int n = 256;
    long l = -1;

    printf("size of int is  %lu\n",sizeof n);
    printf("size of long is %lu\n",sizeof l);

    printf("int  n = 256 is 0x%08x\n",n);
    printf("long l = -1  is 0x%08lx\n",l);

    if (n > l) {
        printf("%u > %ld\n", n, l); //①
    } else {
        printf("%u <= %ld\n", n, l); //②
    }
    return 0;
}
