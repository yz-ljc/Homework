#include <stdio.h>

/**
 * 我来解释一下原理：这个 p 指针是为了他妈的换顺序用的，他是先处理数据再换顺序
 * 十六进制的，记得给大于10的情况减去一个10再加'A'
 */
void itos(int num,char *str) {
    char *p = str;

    if (num == 0) {
        *str++ = '0';
        *str = '\0';
        return;
    }

    if (num < 0) {
        *str++ = '-';
        p++; // 别忘掉
        num = -num;
    }

    while (num != 0) {
        *str++ = num % 10 + '0';
        num = num / 10;
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

    printf("String:%s",str);
    return 0;
}