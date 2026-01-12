#include <stdio.h>

int main()
{
    int vaule;
    int result = 0;
    printf("Input sales:");
    scanf("%d",&vaule);
    if (vaule >= 600000){
        result = (vaule - 600000) * 0.015;
        vaule = 600000;
    }
    if (vaule >= 400000){
        result = result + ((vaule - 400000) * 0.03);
        vaule = 400000;
    }
    if (vaule >= 200000){
        result = result + ((vaule - 200000)) * 0.05;
        vaule = 200000;
    }
    if (vaule >= 100000){
        result = result + ((vaule - 100000) * 0.075) + (100000 * 0.1);
    }
    if (vaule < 100000){
        result = vaule * 0.1;
    }
    printf("bonus=%d",result);
    return 0;
}