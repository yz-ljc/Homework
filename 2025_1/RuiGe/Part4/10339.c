#include <stdio.h>
#define H = 10

int main()
{
    float p1,p2;
    const float r = 2;
    printf("Input (x,y):");
    scanf("%f %f",&p1,&p2);
    float distance = sqrt(pow(p1,2) + pow(p2,2));
    if (distance<=r)
    {
        printf("height=10\n");
    }
    else{
        printf("height=0\n");
    }
    return 0;
}