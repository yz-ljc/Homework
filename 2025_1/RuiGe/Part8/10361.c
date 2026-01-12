#include <stdio.h>

int main()
{
    int temp = 0;
    int n;
    printf("请输入一维数组元素个数:\n");
    scanf("%d",&n);
    int arr[n];
    printf("请输入各元素:\n");
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n-1;j++){
            if (arr[j+1] < arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;            
            }
        }
    }
    printf("数组元素从小到大为:");
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);     
    }
    return 0;
}