#include <stdio.h>
#include <math.h>

int main()
{
    double num1,num2,result;
    char point;
    printf("Input expression:");
    scanf("%lf%c%lf",&num1,&point,&num2);
    switch (point){
        case '+':
            result = num1 + num2;
            printf("%.6lf%c%.6lf=%.6lf",num1,point,num2,result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.6lf%c%.6lf=%.6lf",num1,point,num2,result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.6lf%c%.6lf=%.6lf",num1,point,num2,result);
            break;
        case '/':
            if (num2 == 0){
                printf("Can not divid 0!\n");
                printf("Expression error!");
                break;
            }
            else{
                result = num1 / num2;
                printf("%.6lf%c%.6lf=%.6lf",num1,point,num2,result);
                break;
            }
        default:
            printf("Expression error!");
            break;
    }
    return 0;
}