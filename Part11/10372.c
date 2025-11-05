#include <stdio.h>
const int M = 3;
const int L = 4;
const int N = 2;

void cheng(int arr_a[M][L],int arr_b[L][N],int arr_c[M][N],int m,int l,int n)
{
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            arr_c[i][j] = 0;
        }
    }
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            for (int k = 0;k<l;k++){
                arr_c[i][j] += arr_a[i][k] * arr_b[k][j];
            }

        }
    }
}

int main()
{
    int a[M][L], b[L][N], c[M][N], i, j, k;
    void cheng(int(*)[L], int(*)[N], int(*)[N],
               const int, const int, const int);
    printf("Input matrix A(%d*%d):\n", M, L);
    for (i=0; i<M; i++)
        for (j=0; j<L; j++)
            scanf("%d", &a[i][j]);
    printf("Input matrix B(%d*%d):\n",L,N);
    for (i=0; i<L; i++)
        for (j=0; j<N; j++)
            scanf("%d", &b[i][j]);
    cheng(a, b, c, M, L, N);
    printf("C=A*B:\n");
    for (i=0; i<M; i++)	{
        for (j=0; j<N; j++)
            printf("%7d", c[i][j]);
        printf("\n");
    }
    return 0;
}