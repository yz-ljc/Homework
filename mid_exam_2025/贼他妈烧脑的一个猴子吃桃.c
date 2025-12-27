#include <stdio.h>
int main()
{
    int k,n,m,i=1;
    scanf("%d",&k);
    m = 1;
    n = 5 * m + k;
    while (i <= 4){
        if (n % 4 == 0){
            n = n * 5 / 4 + k;
            i++;
        }
        else{
            m ++;
            n = 5 * m + k;
            i = 1;
        }
    }
    printf("Total: %d",n);
    return 0;
}