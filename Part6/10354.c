#include <stdio.h>
#include <math.h>

double fun(double x)
{
    double fac = 1,x1 = 1,result = 1;
    int sign = 1;
    int n = 1;
    do{
        x1 *= x;
        fac *= n;
        result = result + ((x1 / fac)*sign);
        sign = - sign;
        n++;
    }while (fabs(x1 / fac) > 1e-8);
    return result;
}


int main()
{
    double x;
    printf("Input x:");
    scanf("%lf",&x);
    double outcome = fun(x);
    printf("1+x-x^2/2!+..+(-1)^(n+1)*x^n/n!=%.6lf",outcome);
    return 0;
}