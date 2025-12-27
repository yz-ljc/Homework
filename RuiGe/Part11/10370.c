#include <stdio.h>
#include <string.h>

void delchr(char *s, char c)
{
    char *p = s;
    char *q = s;
    while (*p != '\0'){
        if (*p != c){
            *q = *p;
            q++;
        }
        p++;
    }
    *q = '\0';
}

int main()
{
    char str[128];
    char c;
    printf("Input the string:");
    fgets(str,sizeof(str),stdin);
    for (int i = 0;str[i] != '\0';i++){
        if (str[i] == '\n'){
            str[i] = '\0';
        }
    }
    char old[128];
    strcpy(old,str);
    printf("Input the deleted charactor:");
    scanf("%c",&c);
    delchr(str,c);
    printf("the old string is:%s\n",old);
    printf("delete '%c'\n",c);
    printf("the new string is:%s\n",str);
    return 0;
}