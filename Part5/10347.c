#include <stdio.h>
#include <math.h>

int main()
{
    double eps;
    double x = 3.14159/4;
    printf("Input eps:");
    scanf("%lf",&eps);
    int j = 0;
    do{
        double y = x - (cos(x) - x)/(-sin(x) - 1);
        x = y;
    }while (fabs(cos(x)-x)>eps);
    printf("cos(x)-x=0,x=%.8f",x);
    return 0;
}