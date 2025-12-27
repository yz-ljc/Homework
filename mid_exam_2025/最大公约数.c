#include <stdio.h>
int gcd(int a,int b){
    return b ? gcd(b,a%b) : a;
}
int main()
{
    int a,b;
    printf("Input a num:");
    scanf("%d %d",&a,&b);
    printf("result = %d",gcd(a,b));
    return 0;
}