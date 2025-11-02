#include <stdio.h>

int main()
{
    int arr[20];
    int num;
    int i = 0;
    double result_temp = 0;
    printf("Please input 20 integers!(>0)");
    while (i < 20){
        scanf("%d",&num);
        if (num>0){
            arr[i] = num;
            i++;
        }
    }
    for (int j = 0;j<20;j++){
        result_temp += arr[j];
    }
    double result = result_temp / i;
    printf("\nThe average is %.6lf\ngap:",result);
    for (int k = 0;k<20;k++){
        if (arr[k]>result){
            printf("%d ",arr[k]);
        }
    }
    return 0;
}