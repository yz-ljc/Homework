#include <stdio.h>

int main()
{
    int total = 1;
    for (int i = 1;i <= 9;i++){
        printf("%4d",i);
        for (int k = 1;k <= (i-1);k++){
            printf("    ");
        }
        for (int j = total; j <= 9;j++){
            printf("%4d",i*j);
        }
        total++;
        printf("\n");
    }
    return 0;
}