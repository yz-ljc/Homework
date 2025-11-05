#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    fgets(text,sizeof(text),stdin);
    for (int i = 0;i<strlen(text);i++){
        if ((text[i] < 'W' && text[i] >= 'A') || (text[i] < 'w' && text[i] >= 'a')){
            text[i] += 4;
        }
        else if ((text[i] <= 'Z' && text[i] >= 'W') || (text[i] <= 'z' && text[i] >= 'w')){
            text[i] -= 22;
        }
    }
    printf("%s",text);
    return 0;
}