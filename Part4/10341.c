#include <stdio.h>

int main()
{
    int pos1,pos2;
    printf("Input lines and the number of every line:\n");
    scanf("%d %d",&pos1,&pos2);
    int i = 1;
    int temp = pos1;
    while (i<=pos1){
        for (int v = 1;v<temp;v++){
            printf(" ");
        }
        for (int h=1;h<=pos2;h++){
            printf("*");
        }
        printf("\n");
        temp = temp - 1;
        i++;
    }
    return 0;
}