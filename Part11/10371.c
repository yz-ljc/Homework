#include <stdio.h>

void SumRow(int a[5][4],int pos1,int pos2,int s[5])
{
    //initial the arrary of row
    for (int i = 0;i<pos1;i++){
        s[i] = 0;
    }

    for (int i = 0;i<pos1;i++){
        for (int j = 0;j<pos2;j++){
            s[i] += a[i][j];
        }
    }
}

int main()
{
    printf("Input the matrix(5*4):\n");
    int a[5][4];
    int s[5];
    for (int i = 0;i<5;i++){
        for (int j = 0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    SumRow(a,5,4,s);
    for (int i = 0;i<5;i++){
        printf("row[%d]=%d\n",i,s[i]);
    }
    return 0;
}