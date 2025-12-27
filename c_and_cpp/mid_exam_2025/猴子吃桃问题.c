#include <stdio.h>

int main()
{
    int total = 1;
    int k = 1;
    for (int i = 1;i <= 9;i++){
        total = 2 * (total + k);
    }
    printf("Total: %d",total);
    return 0;
}