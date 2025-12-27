#include <stdio.h>
#include <math.h>

double fn(int x0){
    const double eps = 1e-8;
    double x = x0,pow = 1;
    double result = 1;
    int n = 1,fac = 1;
    int sign = 1;
    do{
        fac *= n;
        pow *= x;
        result += (pow / fac) * sign;
        sign = -sign;
        n++;
    }while (fabs(pow / fac) >= eps);
    return result;
}
int main()
{
    int x;
    printf("Input x:\n");
    scanf("%d",&x);
    double result = fn(x);
    printf("%.6lf",result);
    return 0;
}