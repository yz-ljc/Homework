#include <stdio.h>

const int M = 10;
struct Contestant{
    int num;
    char name[16];
    int scores[10];
    double finalScore;
};

int main()
{
    int singer_num;
    printf("Input number of the singer:");
    scanf("%d",&singer_num);
    struct Contestant user[singer_num];
    printf("Input singer data:\n");
    for (int i = 0;i < singer_num;i++){
        int lower = 100,higher = 0;
        printf("Input Num:");
        scanf("%d",&user[i].num);
        printf("Input Name:");
        scanf("%s",user[i].name);
        user[i].finalScore = 0.0;
        printf("Input 10 Scores:");
        for (int j = 0;j < M;j++){
            scanf("%d",&user[i].scores[j]);
            user[i].finalScore += (double)user[i].scores[j];
            if (user[i].scores[j] < lower){
                lower = user[i].scores[j];
            }
            if (user[i].scores[j] > higher){
                higher = user[i].scores[j];
            }
        }
        user[i].finalScore = (user[i].finalScore - lower - higher) / 8;
    }
    printf("\n-------------------------\n");
    printf("Num\tName\tScore\n");
    for (int i = 0;i < singer_num;i++){
        printf("%d\t%s\t%.2lf\n",user[i].num,user[i].name,user[i].finalScore);
    }
    return 0;
}