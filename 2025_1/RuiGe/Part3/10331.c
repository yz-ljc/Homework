#include <stdio.h>
int main()
{
    unsigned short int integer;
    printf("Input a short int:");
    scanf("%hx",&integer);
    unsigned short int result = integer & 0xFF00 | ~integer & 0x00FF;
    printf("%hx--->%hx",integer,result);
    return 0;
}