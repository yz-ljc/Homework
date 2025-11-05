#include <stdio.h>
#include <string.h>

void itos(int num,char *p)
{
    char str[128];
    sprintf(str,"%d",num);
    strcpy(p,str);
}

int main()
{
    char str[128];
    int n;
    char result[128];
    printf("Input an integer:");
    scanf("%d",&n);
    itos(n,result);
    printf("String:%s",result);
    return 0;
}