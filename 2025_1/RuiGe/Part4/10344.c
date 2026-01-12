#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    for (int i = 0;str[i] != '\0';i++){
        if ((str[i] < 'W' && str[i] >= 'A') || (str[i] < 'w' && str[i] >= 'a')){
            str[i] += 4;
        }
        else if ((str[i] <= 'Z' && str[i] >= 'W') || (str[i] <= 'z' && str[i] >= 'w')){
            str[i] -= 22;
        }
    }
    printf("%s",str);
    return 0;
}