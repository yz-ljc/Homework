#include <stdio.h>

int stoi(char str[]) {
    int n = 0;
    int sign = 1;
    if (*str == '-') {
        sign = -sign;
        str++;
    }
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'F') {
            n = n * 16 + (*str - 'A' + 10);
        }
        else {
            n = n * 16 + (*str - '0');
        }
        str++;
    }
    return n * sign;
}

int main() {
    char str[128];
    printf("Input a string:");
    scanf("%s",str);
    int outcome = stoi(str);
    printf("Int:%d",outcome);
    return 0;
}