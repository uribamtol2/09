#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[4];

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    printf("%s\n", str);

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}