#include <stdio.h>
int main()
{
    short num;
    printf("Input a integer:");
    scanf("%hd",&num);
    printf("%%d:%d,%%o:%o,%%x:%x\n",num,num,num);
    printf("%%hd:%hd,%%ho:%ho,%%hx:%hx",num,num,num);
    return 0;
}