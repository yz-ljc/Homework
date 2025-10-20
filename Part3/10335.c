#include <stdio.h>

int main()
{
    int num,n1,n2,n3;
    printf("Input an integer:");
    scanf("%d",&num);
    n1 = num / 100;
    n2 = (num / 10) % 10;
    n3 = num % 10;
    int outcome = n3 * 100 + n2 * 10 + n1;
    printf(" %d\n",outcome);
    return 0;
}