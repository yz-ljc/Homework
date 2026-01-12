//究竟是哪个哥们这么能卷啊卧槽
#include <stdio.h>

struct order{
    int n;
    char name[16];
    char unit[16];
    float price;
    float quantity;
    float amount;
};

int main()
{
    int num;
    printf("Input the number of orders:");
    scanf("%d",&num);
    struct order orders[num];
    printf("Input %d order information(num name unit price quantity):\n",num);
    for (int i = 0;i<num;i++){
        scanf("%d %s %s %f %f",&orders[i].n,orders[i].name,orders[i].unit,&orders[i].price,&orders[i].quantity);
    }
    for (int  i = 0;i<num;i++){
        orders[i].amount = orders[i].price * orders[i].quantity;
    }
    float total_amount = 0;
    for (int i = 0;i<num;i++){
        total_amount += orders[i].amount;
    }
    float avg = total_amount / num;
    printf("-------------------------\n");
    printf("num\tname\tamount\n");
    for (int i = 0;i<num;i++){
        printf("%d\t%s\t%.2f\n",orders[i].n,orders[i].name,orders[i].amount);
    }
    printf("-------------------------\n");
    printf("Average amount:%.2f",avg);
    return 0;
}