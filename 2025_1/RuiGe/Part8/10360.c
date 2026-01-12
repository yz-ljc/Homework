#include <stdio.h>

int main()
{
    int total;
    int sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;
    printf("Input number of the students:");
    scanf("%d",&total);

    int arr[total][3];
    int avg[total];
    char str[total][128];

    //初始化avg[total]
    for (int i = 0;i<total;i++){
        avg[i] = 0;
    }

    printf("Input student data:\n");

    for (int i = 0;i<total;i++){
        printf("-%d- Name:",i+1);
        scanf("%s",str[i]);
        printf("-%d- 3 scores:",i+1);
        scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
        for (int j = 0;j<3;j++){
            avg[i] += arr[i][j];
        }
        sum1 += arr[i][0];
        sum2 += arr[i][1];
        sum3 += arr[i][2];
        for (int k = 0;k<3;k++){
            sum4 += arr[i][k];
        }
    }

    printf("\n Name Chi. Mat. Eng. Avg.\n");
    for (int i = 0;i<total;i++){
        printf("%5s%5d%5d%5d%5d\n",str[i],arr[i][0],arr[i][1],arr[i][2],avg[i]/3);
    }
    printf("Total%5d%5d%5d%5d\n",sum1 / total,sum2 / total,sum3 / total,sum4 / (total*3));
    return 0;
}