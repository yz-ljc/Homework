#include <stdio.h>

int main()
{
    int n,sign = 1;
    double result = 0;
    printf("Input n:");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        result += sign / (double)i;
        sign = - sign;
    }
    printf("1-1/2+1/3-1/4+...=%.6lf",result);
    return 0;
}