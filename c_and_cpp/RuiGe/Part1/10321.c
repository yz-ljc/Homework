#include <stdio.h>
int main()
{
    int a,b,h,s;
    printf("Input a b h of the Trapezium:");
    scanf("%d %d %d",&a,&b,&h);
    s = (a + b) * h / 2;
    printf("s=%d",s);
    return 0;

}