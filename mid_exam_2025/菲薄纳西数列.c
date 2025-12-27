#include <stdio.h>
int main()
{
    int total = 1,month;
    printf("Input Month:\n");
    scanf("%d",&month);
    int f1 = 1,f2 = 1;
    if (month == 1 || month == 2){
        total = 0;
    }
    else{
        int i = 3;
        while (i <= month){
            total = f1 + f2;
            f1 = f2;
            f2 = total;
            i++;
        }
    }
    printf("Month %d, Total:  %d",month,total);
    return 0;
}