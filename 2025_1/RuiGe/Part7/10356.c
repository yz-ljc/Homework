#include <stdio.h>

int main()
{
    int arr[5][5];
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    printf("Input the matrix(5*5):\n");
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            scanf("%d",&arr[j][i]);
        }
    }
    for (int i=0;i<5;i++){
        s1 += arr[i][i];
    }
    for (int i=0;i<5;i++){
        s2 += arr[4-i][i];
    }
    for (int i=0;i<5;i++){
        if (i == 0 || i == 4){
            for (int j=0;j<5;j++){
                s3 += arr[j][i];
            }
        }
        else{
            s3 += arr[0][i];
            s3 += arr[4][i];
        }
    }
    printf("s1=%d,s2=%d,s3=%d",s1,s2,s3);
    return 0;
}