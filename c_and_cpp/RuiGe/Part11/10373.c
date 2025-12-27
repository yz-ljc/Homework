#include <stdio.h>

int fib(int n)
{
    int result = 0;
    int a=0,b=0,c=1,d=0,temp=0;
    if (n == 1 || n == 2){
        result = 0;
    }
    else if (n == 3){
        result = 1;
    }
    else{
        int i = 4;
        while (i <= n){
            d = a + b + c;
            temp = a;
            a = b;
            b = c;
            c = d;
            i++;
        }
        result = d;
    }
    return result;
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