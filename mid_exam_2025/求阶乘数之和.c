#include <stdio.h>
int main()
{
    int n,i=1;
    printf("Input n:");
    scanf("%d",&n);
    double result = 0;
    double fac = 1;
    do{
        fac *= i;
        result += 1/fac;
        i++;
    }while (i <= n);
    printf("%.6lf",result);
    return 0;
}