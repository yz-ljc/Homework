#include <stdio.h>

int main()
{
    int line;
    int overall = 1;
    printf("Input longest line:\n");
    scanf("%d",&line);
    int temp = line;
    for (int i=1;i < line;i++){
        for (int i1=temp;i1 > 1;i1--){
            printf(" ");
        }
        temp -= 1;
        for (int i2=1;i2 <= overall;i2++){
            printf("%%");
        }
        printf("\n");
        overall += 2;
    }
    for (int j=1;j <= line * 2 - 1;j++){
        printf("%%");
    }
    printf("\n");
    int temp2 = 1;
    overall -= 2;
    for (int k=1;k<line;k++){
        for (int k1=0;k1 < temp2;k1++){
            printf(" ");
        }
        for (int k2=overall;k2 >= 1;k2--){
            printf("%%");
        }
        printf("\n");
        temp2 += 1;
        overall -= 2;
    }
    return 0;
}