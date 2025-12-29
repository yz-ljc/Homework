#include <stdio.h>

int stoi(char str[128])
{
    int result = 0;

    int total = 0;
    while (str[total] != '\0'){
        total++;
    }

    for (int i = 0;i<total;i++){
        if (str[i] == '-'){
            result += 0;
        }
        else{
            result = result * 10 + (str[i] - 48);
        }
    }
    if (str[0] == '-'){
        result = result * (-1);
    }
    return result;
}

int main()
{
    char str[128];
    printf("Input a string:");
    scanf("%s",str);
    int outcome = stoi(str);
    printf("Int:%d",outcome);
    return 0;
}