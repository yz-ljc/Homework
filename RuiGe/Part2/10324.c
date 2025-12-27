#include <stdio.h>
int main()
{
    int ch;
    printf("Input an integer:");
    scanf("%d",&ch);
    printf("%d--->%c",ch,(char)ch);
    return 0;
}