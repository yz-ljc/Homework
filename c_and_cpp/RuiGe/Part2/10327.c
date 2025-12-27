#include <stdio.h>
int main()
{
    int a,b,c,d,sum;
    printf("Enter integer a:\n");
    scanf("%d",&a);
    printf("Enter integer b:\n");
    scanf("%d",&b);
    printf("Enter integer c:\n");
    scanf("%d",&c);
    printf("Enter integer d:\n");
    scanf("%d",&d);
    sum = (a + b - c) * d;
    printf("(%d+%d-%d)*%d=%d",a,b,c,d,sum);
    return 0;
}
