#include <stdio.h>

double mathpow(double x,int n)
{
    double result = 1.0;
    for (int i =1;i<=n;i++){
        result = result * x;
    }
    return result;
}

int main()
{
    int n;
    double x;
    printf("Calculate pn(x)=anX^n+...+a1X+a0\n");
    printf("Input n:\n");
    scanf("%d",&n);
    printf("Input x:\n");
    scanf("%lf",&x);
    printf("Input an...a1,a0:");
    double arr[n+1];
    for (int j = n;j>=0;j--){
        scanf("%lf",&arr[j]);
    }
    double result = 0;
    for (int k = 0;k<=n;k++){
        result = result + (arr[k]*mathpow(x,k));
    }
    printf("\nresult=%.6lf",result);
    return 0;
}