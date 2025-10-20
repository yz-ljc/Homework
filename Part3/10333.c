#include <stdio.h>
int main()
{
    double f,c;
    printf("Input Fahrenheit:");
    scanf("%lf",&f);
    c = (f - 32) / 1.8;
    printf("%.6lf",c);
    return 0;
}