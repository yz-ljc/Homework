#include <stdio.h>
#include <math.h>

int main()
{
    double eps;
    printf("Input eps:");
    scanf("%lf",&eps);
    double x = 0.9;
    do{
        double f1 = x*x*x + 0.5*x*x - 0.5*x - 1;
        double f2 = 3*x*x + x - 0.5;        
        double x1 = x - f1 / f2;
        x = x1;
    }while (fabs(x*x*x + 0.5*x*x - 0.5*x - 1)>eps);
    printf("方程的根为%.6lf",x);
    return 0;
}