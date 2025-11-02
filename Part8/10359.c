#include <stdio.h>

int main()
{
    int student_num;
    int level_e = 0;
    int level_d = 0;
    int level_c = 0;
    int level_b = 0;
    int level_a = 0;
    printf("Input number of the students:");
    scanf("%d",&student_num);
    int score[student_num];
    printf("Input the scores(%d):\n",student_num);
    for (int i = 0;i<student_num;i++){
        scanf("%d",&score[i]);
    }
    for (int i = 0;i<student_num;i++){
        if (score[i] < 60){
            level_e ++;
        }
        else if (score[i] < 70 && score[i] >= 60){
            level_d ++;
        }
        else if (score[i] < 80 && score[i] >= 70){
            level_c ++;
        }
        else if (score[i] < 90 && score[i] >= 80){
            level_b ++;
        }
        else if (score[i] <= 100 && score[i] >= 90){
            level_a ++;
        }   
    }
    printf("A(90~100):%d\n",level_a);
    printf("B(80~89):%d\n",level_b);
    printf("C(70~79):%d\n",level_c);
    printf("D(60~69):%d\n",level_d);
    printf("E(<60):%d\n",level_e);
    printf("Total:%d",student_num);
    return 0;
}