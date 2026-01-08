#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2){
        return 0;
    }
    if (n == 3){
        return 1;
    }
    return fib(n-1) + fib(n-2) + fib(n-3);
}
int main()
{
    int n = 0;
    printf("Fib(n)=?  Please input \"n\":");
    scanf("%d",&n);
    int result = fib(n);
    printf("Fib(%d)=%d",n,result);
    return 0;
}