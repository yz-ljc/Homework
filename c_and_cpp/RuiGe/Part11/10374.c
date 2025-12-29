#include <stdio.h>
#include <string.h>

void itos(int n,char *str)
{
    // n = 0
    if (n == 0){
        *str = '0';
        str++;
        *str = '\0';
        return;
    }

    // n < 0
    if (n < 0){
        *str = '-';
        n = -n;
        str++;
    }

    //  逆置
    int tmp1 = n;
    while (tmp1 != 0){
        tmp1 = tmp1 / 10;
        str++;
    }

    // Put \0 to the end of the str
    *str = '\0';
    str--;

    // Swap integer into string
    while (n != 0){
        *str = (n % 10) + '0';
        str--;
        n /= 10;
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