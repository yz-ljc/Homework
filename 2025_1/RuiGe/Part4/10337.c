#include <stdio.h>
#include <math.h>

int main()
{
    double num1,num2,result;
    char point;
    int correct = 0;
    int div = 0;
    printf("Input expression:");
    scanf("%lf%c%lf",&num1,&point,&num2);
    switch (point){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/': {
            if (num2 == 0){
                div = 1;
                correct = 1;
                break;
            }
            result = num1 / num2;
            break;
        }
        default:
            correct = 1;
            break;
    }
    if (div){
        printf("Can not divid 0!\n");
    }
    if (correct){
        printf("Expression error!");
    }
    else{
        printf("%.6lf%c%.6lf=%.6lf",num1,point,num2,result);
    }
    return 0;
}