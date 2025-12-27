//喜欢我的指针满天飞吗老铁
//喜欢我的指针满天飞吗老铁
//喜欢我的指针满天飞吗老铁
#include <stdio.h>

int main()
{
    float money_original = 0;
    int arr[12] = {0};
    printf("输入金额:\n");
    scanf("%f",&money_original);
    int money = money_original * 100;
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


/*        if (money >= 10000){
            arr[0] += 1;
            money = money - 10000;
        }
        else if (money >= 5000){
            arr[1] += 1;
            money = money - 5000;
        }
        else if (money >= 2000){
            arr[2] += 1;
            money = money - 2000;
        }
        else if (money >= 1000){
            arr[3] += 1;
            money = money - 1000;
        }
        else if (money >= 500){
            arr[4] += 1;
            money = money - 500;
        }
        else if (money >= 100){
            arr[5] += 1;
            money = money - 100;
        }
        else if (money >= 50){
            arr[6] += 1;
            money = money - 50;
        }
        else if (money >= 10){
            arr[7] += 1;
            money = money - 10;
        }
        else if (money >= 5){
            arr[8] += 1;
            money = money - 5;
        }
        else {
            arr[9] += 1;
            money = money - 1;
        }
    }
    */