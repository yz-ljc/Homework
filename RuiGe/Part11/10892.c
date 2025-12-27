#include <stdio.h>
const int N = 40;
int main()
{
    int i, e, n, a[N];
    //说明DelElement()
    void DelElement(int *a, int *n, int x);
    printf("Input n:");
    scanf("%d", &n);
    printf("Input array element:");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Input delete data:");
    scanf("%d", &e);
    DelElement(a, &n, e);
    printf("\nThe new array:");
    for (i=0; i<n; i++)
        printf("%4d", a[i]);
    printf("\n");
    return 0;
}
//定义DelElement()
void DelElement(int *a,int *n,int x){
    int count = 0;
    for (int i = 0;i < *n;i++){
        if (a[i] != x){
            a[count] = a[i];
            count++;
        }
    }
    *n = count;
}