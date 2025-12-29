#include <stdio.h>
int strCmp(char *, char *);
int main()
{  
    char s1[40], s2[40]; 
    int result;
    printf("Input two strings(<40):");
    scanf("%s %s", s1, s2);
    result = strCmp(s1, s2);
    if (result > 0)  
        printf("%s>%s\n", s1,s2);
    else if (result < 0)
        printf("%s<%s\n", s1,s2);
    else
        printf("%s==%s\n", s1,s2);
    return 0;
}
int strCmp(char *s1, char *s2)
{  
    //start
    char *s = s1;
    while (*s1 == *s2 && *s1 != '\0'){
        s1++;
        s2++;
    }
    if (*s1 > *s2){
        return s1 - s + 1;
    }
    else if (*s1 < *s2){
        return s - s1 - 1;
    }
    else{
        return 0;
    }
    //end
}