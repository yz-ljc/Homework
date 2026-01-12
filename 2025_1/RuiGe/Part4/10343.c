#include <stdio.h>

int main()
{
    int num;
    int result = 0;
    printf("Input a number(>=0):");
    scanf("%d",&num);
    while(num != 0){
        result += num % 10;
        num /= 10;
    }
    printf("the sum is:%d",result);
    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char word[128];
    int result = 0;
    printf("Input a number(>=0):");
    scanf("%d",&num);
    sprintf(word,"%d",num);
    for (int i = 0;i<strlen(word);i++){
        result = result + (int)word[i] - 48;
    }
    printf("the sum is:%d",result);
    return 0;
}
*/