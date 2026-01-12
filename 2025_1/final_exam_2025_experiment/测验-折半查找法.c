#include <stdio.h>
const int N = 10;
int main()
{
    int Search_Bin(int *b, int n, int x);
    int arr[N],search_element;

    printf("Input %d integers:",N);
    for (int i = 0;i < N;i++){
        scanf("%d",&arr[i]);
    }
    printf("Input the searched element:");
    scanf("%d",&search_element);

    int result = Search_Bin(arr,N,search_element);

    if (result){
        printf("Found! index=%d",result);
    }
    else{
        printf("Not found!");
    }
    return 0;
}

/**
 * 可能会错：检查是不是用的 b[mid] 与 x 进行比较，检查 while 的条件对不对
 * 检查 higher 和 lower 的数据写对了吗，写返回值了吗
 */

int Search_Bin(int *b,int n,int x){
    int higher = n - 1,lower = 0,mid;

    while (lower <= higher){
        mid = (higher + lower) / 2;
        if (b[mid] > x){
            higher = mid - 1;
        }
        else if (b[mid] < x){
            lower = mid + 1;
        }
        else{
            return mid;
        }
    }
    return 0;
}