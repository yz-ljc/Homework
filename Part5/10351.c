#include <stdio.h>

int main()
{
    int total = 0;
    int k;
    printf("Input last:");
    scanf("%d",&k);
    int n = 1;
    int answer = 0;
    while (answer != 1){
        int temp = n;
        int vaild = 1;
        int outcome = 0;
        for (int j = 1; j<=5;j++){
            if ((temp - k) % 5 !=0 || temp < k){
                vaild = 0;
                break;
            }
            total = (temp - k) / 5 * 4;
            temp = total;
            outcome = j;
        }
        if (vaild == 1 && outcome == 5){
            answer = 1;
        }
        else{
            n++;
        }
    }

    printf("the sum is:%d",n);
    return 0;
}