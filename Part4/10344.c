#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    fgets(text,sizeof(text),stdin);
    for (int i = 0;i<strlen(text);i++){
        if (text[i] < 'W' && text[i] >= 'A'){
            text[i] = text[i] + 4;
        }
        else if (text[i] == 'W'){
            text[i] = 'A';
            
        }
        else if (text[i] == 'X'){
            text[i] = 'B';
            
        }
        else if (text[i] == 'Y'){
            text[i] = 'C';
            
        }
        else if (text[i] == 'Z'){
            text[i] = 'D';
            
        }
        else if (text[i] < 'w' && text[i] >= 'a'){
            text[i] = text[i] + 4;
        }
        else if (text[i] == 'w'){
            text[i] = 'a';
            
        }
        else if (text[i] == 'x'){
            text[i] = 'b';
            
        }
        else if (text[i] == 'y'){
            text[i] = 'c';
            
        }
        else if (text[i] == 'z'){
            text[i] = 'd';
            
        }
    }
    printf("%s",text);
    return 0;
}