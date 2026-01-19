#include <stdio.h>

/**
 * 可能会出错的地方：p++ 没写，数字0-9没当字符处理，字母用了 char 当变量名字
 * '\t' 没写
 */

int main()
{
    char str[64],*p = str;
    int chars = 0,digit = 0,blank = 0,other = 0;
    
    printf("Input a string:");
    gets(str);
    
    while (*p != '\0'){
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')){
            chars++;
        }
        else if (*p >= '0' && *p <= '9'){
            digit++;
        }
        else if (*p == ' ' || *p == '\t'){
            blank++;
        }
        else{
            other++;
        }
        p++;
    }
    printf("char:%d,digit:%d,blank:%d,other:%d",chars,digit,blank,other);
    return 0;
}