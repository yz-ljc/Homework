#include <stdio.h>
int main()
{
    int origin;
    printf("Input an integer(****): ");
    scanf("%d",&origin);
    int n1 = ((origin / 1000) + 9) % 10;
    int n2 = (((origin / 100) % 10) + 9) % 10;
    int n3 = (((origin / 10) % 10) +9) % 10;
    int n4 = ((origin % 10) + 9) % 10;
    int temp1 = n3;
    n3 = n1;
    n1 = temp1;
    int temp2 = n2;
    n2 = n4;
    n4 = temp2;
    int key = n1 * 1000 + n2 * 100 + n3 * 10 + n4;
    printf("The encrypted number is %d",key);
    return 0;
}