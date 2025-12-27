#include <stdio.h>

void itos(int n,char *str)
{
    int tmp1 = n;
    if (n == 0){
        *str = '0';
        str++;
        *str = '\0';
        return;
    }
    if (tmp1 < 0)  tmp1 = -tmp1;
    while (tmp1 != 0){
        tmp1 = tmp1 / 10;
        str++;
    }
    int tmp2 = n;
    if (n < 0){
        str++;
        tmp2 = -tmp2;
    }
    *str = '\0';
    str--;

    while (tmp2 != 0){
        *str = (tmp2 % 10) + '0';
        str--;
        tmp2 /= 10;
    }
    if (n < 0){
        *str = '-';
    }
}

int main()
{
    char str[128] = {0};
    int n;
    printf("Input an integer:");
    scanf("%d",&n);
    itos(n,str);
    printf("String:%s",str);
    return 0;
}