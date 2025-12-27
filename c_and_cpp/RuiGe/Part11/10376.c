#include <stdio.h>
#include <string.h>

void SwapStr(char str[],int total,int cursor,char *swap){
    char temp[32];
    for (int i = 0;i<cursor;i++){
        temp[i] = str[i];
    }
    for (int i = 0;i<total-cursor;i++){
        str[i] = str[i+cursor];
    }
    int j = 0;
    for (int i = total-cursor;i<total;i++){
        str[i] = temp[j];
        j++;
    }
    strcpy(swap,str);
}

int main()
{
    char str[32];
    char swapped[32];
    int i = 0;
    printf("输入字符串：");
    scanf("%s",str);
    int len = strlen(str);
    printf("输入m（[0,%d]）：",len);
    int swap_num;
    scanf("%d",&swap_num);
    SwapStr(str,len,swap_num,swapped);
    printf("字符串变为:%s",swapped);
    return 0;
}