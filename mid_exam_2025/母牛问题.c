#include <stdio.h>

int main()
{
    int year,f1=1,f2=1,f3=1,f4=1;
    printf("Input the num of year:");
    scanf("%d",&year);
    if (year == 1 || year == 2 || year ==3 ){
        f4 = 1;
    }
    else{
        for (int i = 4;i <= year;i++){
            f4 = f1 + f3;
            f1 = f2;
            f2 = f3;
            f3 = f4;
        }
    }
    printf("year: %d, count: %d",year,f4);
    return 0;
}