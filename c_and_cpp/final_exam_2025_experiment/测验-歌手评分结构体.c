#include <stdio.h>

const int N = 10;
struct Contestant{
    int num;
    char name[16];
    int scores[10];
    double finalScore;
};

int main()
{
    int singerCount;
    printf("Input number of the singer:");
    scanf("%d",&singerCount);
    struct Contestant user[singerCount];
    printf("Input singer data:\n");
    for (int i = 0;i < singerCount;i++){
        printf("Input Num:");
        scanf("%d",&user[i].num);
        printf("Input Name:");
        scanf("%s",user[i].name);
        printf("Input %d Scores:",N);
        double tmp = 0,higher = 0,lower = 100;
        for (int j = 0;j < N;j++){
            scanf("%d",&user[i].scores[j]);
            tmp += user[i].scores[j];
            if (user[i].scores[j] > higher){
                higher = user[i].scores[j];
            }
            if (user[i].scores[j] < lower){
                lower = user[i].scores[j];
            }
        }
        user[i].finalScore = (tmp - higher - lower) / 8;
    }
    printf("\n-------------------------\n");
    printf("Num\tName\tScore\n");
    for (int i = 0;i < singerCount;i++){
        printf("%d\t%s\t%.2lf\n",user[i].num,user[i].name,user[i].finalScore);
    }
    return 0;
}