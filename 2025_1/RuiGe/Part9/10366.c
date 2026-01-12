#include <stdio.h>

int main()
{
    float originalMoney = 0;
    int arr[12] = {0};
    printf("输入金额:\n");
    scanf("%f",&originalMoney);
    int money = originalMoney * 100;
    int count[] = {
        10000,
        5000,
        2000,
        1000,
        500,
        100,
        50,
        20,
        10,
        5,
        2,
        1
    };
    int total = sizeof(count) / sizeof(count[0]);
    char *cn_names[] = {"壹佰元","伍拾元","贰拾元","壹拾元","伍元","壹元","伍角","贰角","壹角","伍分","贰分","壹分"};
    int *q = count;
    int i = 0;
    while (q < count + total){
        if ((money / *q)  != 0){
            arr[i] += (money / *q);
            money -= (money / *q) * count[i];
        }
        i++;
        q++;
    }
    for (int i = 0;i<12;i++){
        if (arr[i]  != 0){
            printf("%s:%d张\n",cn_names[i],arr[i]);
        }
    }
    return 0;
}