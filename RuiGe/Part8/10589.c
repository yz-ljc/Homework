#include <stdio.h>
const int N = 10;
int main()
{
    int Search_Bin(int *b, int n, int x);
    int integer;
    int b[N];
    printf("Input %d integers:",N);
    for (int i = 0;i < N;i++){
        scanf("%d",&b[i]);
    }
    printf("Input the searched element:");
    scanf("%d",&integer);
    int result = Search_Bin(b,N,integer);
    if (result){
        printf("Found! index=%d",result);
    }
    else{
        printf("Not found!");
    }
    return 0;
}

int Search_Bin(int *b,int n,int x){
    int low = 0,high = n - 1;
    int found = 0;
    while (low <= high && found == 0){
        int mid = (low + high) / 2;
        if (x < b[mid]){
            high = mid - 1;
        }
        else if (x > b[mid]){
            low = mid + 1;
        }
        else{
            found = 1;
            return mid;
        }
    }
    return 0;
}