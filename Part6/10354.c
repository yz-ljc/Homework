#include <stdio.h>
#include <math.h>

double fn(double x)
{
    int n = 2;
    int correct = 0;
    double f2 = 1.0;
    double result = 1.0 + x;
    while (correct != 1){
        double f1 = 1;
        for (int i = 1;i<=n;i++){
            f1 = f1 * x;
        }
        f2 = f2 * n;
        if (n % 2 == 0){
            result = result - f1 / f2;
        }
        else{
            result = result + f1 / f2;
        }
        n++;
        if (fabs(f1/f2) > 1e-8){
            correct = 0;
        }
        else{
            correct = 1;
        }
    }
    return result;
}

int main()
{
    double x = 0;
    printf("Input x:");
    scanf("%lf",&x);
    double outcome = fn(x);
    printf("1+x-x^2/2!+..+(-1)^(n+1)*x^n/n!=%.6lf",outcome);
}