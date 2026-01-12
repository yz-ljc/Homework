#include <stdio.h>

int isPrime(int n){
    if (n <=2){
        return 1;
    }
    for (int i = 2;i < n;i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Input an integer(>0):\n");
    scanf("%d",&n);
    if (isPrime(n)){
        printf("%d is a prime.",n);
    }
    else{
        printf("%d is not a prime.",n);
    }
    return 0;
}