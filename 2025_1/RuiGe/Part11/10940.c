#include <stdio.h>
void strCat(char *, char *);
int main()
{
    char str1[40], str2[40];
    printf("Input two strings(<40):");
    scanf("%s %s", str1, str2);
    strConcat(str1, str2);
    printf("The new string:%s\n", str1);
    return 0;
}
void strConcat(char *s1, char *s2)
{
    //start
    while (*s1 != '\0'){
        s1++;
    }
    while (*s2 != '\0'){
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    //end
}