#include <stdio.h>
#include <string.h>

void delchr(char *s,char c){
    char *p = s;
    while (*p != '\0'){
        if (*p != c){
            *s = *p;
            s++;
        }
        p++;
    }
    *s = '\0';
}

int main()
{
    char str[32];
    char deleted;
    printf("Input the string:");
    gets(str);
    char temp[32];
    strcpy(temp,str);
    printf("Input the deleted charactor:");
    scanf("%c",&deleted);
    delchr(str,deleted);
    printf("the old string is:%s\n",temp);
    printf("delete '%c'\n",deleted);
    printf("the new string is:%s",str);
    return 0;
}