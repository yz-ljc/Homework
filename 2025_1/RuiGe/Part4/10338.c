#include <stdio.h>
#include <math.h>

int main()
{
    float x,y;
    printf("Input x:");
    scanf("%f",&x);
    if (x<-10){
        y = 7*x-20;
    }
    else if(x<5 && x>=-10){
        y = (3*x*x)+(4*x)-6;
    }
    else if(x<200 && x>=5){
        y = (2*pow(x,3))-28;
    }
    else{
        y = 10*x-2;
    }
    printf("y=%.2f",y);
    return 0;
}