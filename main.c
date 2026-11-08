#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char src[] = "The worst things to eat before you sleep";
    char dst[100];

    //복사
    strcpy(dst, src);

    printf("copied string : %s\n", dst);

    return 0;
}