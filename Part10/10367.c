#include <stdio.h>

struct employees{
    int n;
    char name[16];
    int year;
    char sex;
    char position[16];
    int wage;
};
int main()
{
    int num = 0;
    printf("Input the number of employee:");
    scanf("%d",&num);
    struct employees employee[num];
    printf("Input %d employee information(num name workYear sex position wage):\n",num);
    for (int i =0;i<num;i++){
        scanf("%d %s %d %c %s %d",&employee[i].n,employee[i].name,&employee[i].year,&employee[i].sex,employee[i].position,&employee[i].wage);
    }
    int total = 0;
    for (int i = 0;i<num;i++){
        total += employee[i].wage;
    }
    int avg = total / num;
    printf("average wage is: %d",avg);
    return 0;
}