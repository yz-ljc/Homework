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

    while (num != 0) {
        *str++ = num % 2 + '0';
        num  /= 2;
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

    printf("String(O):%s",str);
    return 0;
}