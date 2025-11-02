#include <stdio.h>

int main()
{
    char str[1024];
    int cha = 0,digit = 0,blank = 0,other = 0;
    printf("Input a string:");
    fgets(str,sizeof(str),stdin);
    char *p = str;
    while (*p != '\0'){
        if ((*p >= 'A' && *p <= 'Z') || (*p >=  'a' && *p <= 'z')){
            cha++;
            *p++;
        }
        else if (*p >= '0' && *p <= '9'){
            digit++;
            *p++;
        }
        else if (*p == ' ' || *p == '\t'){
            blank++;
            *p++;
        }
        else{
            other++;
            *p++;
        }
    }
    printf("char:%d,digit:%d,blank:%d,other:%d",cha,digit,blank,other);
    return 0;
}