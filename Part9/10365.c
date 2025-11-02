#include <stdio.h>

int main()
{
    char str[1024];
    char *p = str;
    printf("Please input the string:");
    fgets(str,sizeof(str),stdin);
    //char blank = getchar();
    printf("Input the deleted charactor:");
    char deleted = getchar();
    char *q = str;
    while (*p != '\0'){
        if (*p != deleted){
            *q = *p;
            *q++;
        }
        *p++;  
    }
    *q = '\0';
    printf("The new string:%s",str);
    return 0;
}