#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[30] = "happy C programing";

    printf("문자열 \"%s\"의 길이 : %lu\n", str, strlen(str));

    return 0;
}