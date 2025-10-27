#include <stdio.h>

int IsPrime(int num)
{
    if (num <= 2){
        return 1;
    }
    for (int i = 2;i<num;i++){
        if (num % i ==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int input;
    printf("Input an integer(>0):");
    scanf("%d",&input);
    if (IsPrime(input)){
        printf("%d is a prime.",input);
    }
    else{
        printf("%d is not a prime.",input);
    }
    return 0;
}