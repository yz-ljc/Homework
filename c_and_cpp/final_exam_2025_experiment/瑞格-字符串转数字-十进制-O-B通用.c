#include <stdio.h>

int stoi(char str[]) {
    int n = 0;
    int sign = 1;
    if (*str == '-') {
        sign = -sign;
        str++;
    }
    while (*str != '\0') {
        n = n * 10 + (*str - '0'); // B、O自己换成2和8
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