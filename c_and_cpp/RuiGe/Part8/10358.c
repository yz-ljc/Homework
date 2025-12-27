#include <stdio.h>

int max_num(int num[5])
{
    int max_number = 0;
    int max = num[0];
    for (int i = 1;i<5;i++){
        if (num[i] > max){
            max = num[i];
            max_number = i;
        }
    }
    return max_number;
}

int main()
{
    int arr[5][3];
    int temp = 0;
    int num[5] = {0};
    int result = 0;
    int max_arr = 0;
    printf("Input matrix(5*3):\n");
    for (int i = 0;i<5;i++){
        for (int j = 0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0;i<5;i++){
        for (int j = 0;j<3;j++){
            result += arr[i][j];
        }
        printf("sum of line %d is :%d\n",i+1,result);
        num[i] = result;
        result = 0;
    }
    max_arr = max_num(num);
    if (max_arr != 0){
        for (int i = 0;i<3;i++){
            temp = arr[0][i];
            arr[0][i] = arr[max_arr][i];
            arr[max_arr][i] = temp;
        }
    }
    printf("The new matrix is :\n");
    for (int i = 0;i<5;i++){
        printf("%5d%5d%5d\n",arr[i][0],arr[i][1],arr[i][2]);
    }
    return 0;
}