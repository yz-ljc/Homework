#include <stdio.h>

void itos(int num,char *str) {
    char *p = str;

    if (num == 0) {
        *str++ = '0';
        *str = '\0';
        return;
    }

    if (num < 0) {
        *str++ = '-';
        p++;
        num = -num;
    }

    int temp = 0;
    while (num != 0) {
        temp = num % 16;
        num = num / 16;
        if (temp >= 10) {
            *str++ = temp - 10 + 'A';
        }
        else {
            *str++ = temp + '0';
        }
    }

    *str-- = '\0';

    while (p < str) {
        char temp = *p;
        *p = *str;
        *str = temp;
        str--;
        p++;
    }

}

int main() {
    int integer;
    char str[64];
    printf("Input an integer:");
    scanf("%d",&integer);

    itos(integer,str);

    printf("String(H):%s",str);
    return 0;
}