#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    const double P = 7.8;
    double radius;
    printf("Input radius:");
    scanf("%lf",&radius);
    double s = PI * 4 * pow(radius,2);
    double v = (PI * 4 * pow(radius,3)) / 3;
    double q = P * v;
    printf("s=%.2lf,v=%.2lf,q=%.2lf",s,v,q);
    return 0;
}