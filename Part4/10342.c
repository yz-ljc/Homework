#include <stdio.h>

int main()
{
    int n;
    double result = 0;
    printf("Input n:");
    scanf("%d",&n);
    int i = 1;
    while (i<=n){
        if (i % 2 == 1){
            result = result + (1 / (double)i); 
        }
        else{
            result = result - (1 / (double)i);
        }
    i++;
    }
    printf("1-1/2+1/3-1/4+...=%.6lf",result);
    return 0;
}   
        
/*  
之前写的一个判断了更多地显示问题
    int point = 0;
    int i = 1;
    int n;
    double result = 0;
    double temp;
    printf("Input n:");
    scanf("%d",&n);
    while (i<=n){
        point = i % 2;
        if (i<=4){
            if (point == 1){
                temp = 1/(double)i;
                result =  result + temp;
                if (i  == 1){
                    printf("1");
                }
                else{
                    printf("+1/%d",i);
                }
            }
            else{
                temp = 1/(double)i;
                result = result - temp;
                printf("-1/%d",i);
            }
        }
        else{
            if (point == 1){
                temp = 1/(double)i;
                result = result + temp;
            }
            else{
                temp = 1/(double)i;
                result = result - temp;
            }
        }
        i++;
    }
    printf("+...=%.6lf",result);
    return 0;
}
*/