#include <stdio.h>
#include <math.h>

double power(double x,double n){
    double tmp = x;
    for (int i = 1; i < n; i++) {
        x *= tmp;
    }
    return x;
}
double fac(double n){
    double output = 1;
    for (int i = 1; i <= n; i++){
        output = output * i;
    }
    return output;
}
double fn(double x){
    double result = 1;
    int n = 2;
    do{
        if (n % 2 == 0){
            result = result + power(x,n-1) / fac(n-1);
        }
        else{
            result = result - power(x,n-1) / fac(n-1);
        }
        n++;
    }while (fabs(power(x,n-1) / fac(n-1)) > 1e-8);
    return result;
}

int main()
{
    double x;
    printf("Input x:");
    scanf("%lf",&x);
    double outcome = fn(x);
    printf("1+x-x^2/2!+..+(-1)^(n+1)*x^n/n!=%.6lf",outcome);
    return 0;
}