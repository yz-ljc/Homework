#include <stdio.h>

const int M = 5,N = 4;

void SumRow(int (*arr)[N],int m,int n,int sumRow[]){
    for (int i = 0;i < m;i++){
        sumRow[i] = 0;
        for (int j = 0;j < n;j++){
            sumRow[i] += arr[i][j];
        }
    }
}

int main()
{
    int matrix[M][N];
    int sumRow[M];
    printf("Input the matrix(%d*%d):\n",M,N);
    for (int i = 0;i < M;i++){
        for (int j = 0;j < N;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    SumRow(matrix,5,4,sumRow);

    for (int i = 0;i < M;i++){
        printf("row[%d]=%d\n",i,sumRow[i]);
    }
    return 0;
}