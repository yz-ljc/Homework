#include <stdio.h>
#include <string.h>

int main()
{
    char str[1024];
    int arr[26] = {0};
    int num = 0;
    printf("Input a string:\n");
    fgets(str,sizeof(str),stdin);
    for (int i = 0;str[i] != '\0';i++){
        if (str[i] <= 'z' && str[i] >= 'a'){
            num = str[i] - 97;
            arr[num] ++;
        }
    }
    for (int i=0;i<26;i++){
        if (arr[i] != 0){
            printf("number of '%c' is:%d\n",'a'+i,arr[i]);
        }
    }
    return 0;
}