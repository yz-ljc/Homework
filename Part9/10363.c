#include <stdio.h>
#include <string.h>

int main()
{
    int m;
    char str[128];
    char *p = str;
    printf("Please input the string:");
    fgets(str,sizeof(str),stdin);
    int total = strlen(str);
    if (str[total-1] == '\n'){
        str[total-1] = '\0';
        total = total - 2;
    }
    printf("Please input the number of swap-char:");
    scanf("%d",&m);

    for (int i = 0;i < m;i++){
        char temp = *(p+i);
        *(p+i) = *(p+total-m+i);
        *(p+total-m+i) = temp;
    }
    printf("The new string is %s",str);
    return 0;
}