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
//定义DelElement() - 指针版
/**
 * 可能会错：检查你的 if (*p != x) 条件写对了吗
 * 检查你的 counter++ 和 a++ 写对了吗
 * *n 给传新的值了吗
 */
void DelElement(int *a,int *n,int x){
    int *p = a;
    int counter = 0;
    for (int i = 0;i < *n;i++){
        if (*p != x){
            *a = *p;
            a++;
            counter++;
        }
        p++;
    }
    *n = counter;
}
