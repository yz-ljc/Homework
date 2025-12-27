#include <stdio.h>

int main()
{
    int n;
    double x,a,result = 0;
    printf("Calculate pn(x)=anX^n+...+a1X+a0\n");
    printf("Input n:\n");
    scanf("%d",&n);
    printf("Input x:\n");
    scanf("%lf",&x);
    printf("Input an...a1,a0:");
    for (int j = n;j>=0;j--){
        scanf("%lf",&a);
        result = result * x + a;
    }
    printf("\nresult=%.6lf",result);
    return 0;
}