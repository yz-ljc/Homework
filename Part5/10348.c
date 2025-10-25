#include <stdio.h>

int main()
{
    int m,n,win,draw,fail;
    int outcome = 0;
    printf("Input the number of matches:\n");
    scanf("%d",&m);
    printf("Input the score:\n");
    scanf("%d",&n);
    for (win = 0;win<=m;win++){
        for (draw = 0;draw<=m;draw++){
            for (fail = 0;fail<=m;fail++){
                if ((3*win) + (1*draw) + (0*fail) == n && win + draw + fail == m){
                    printf("win:%d,draw:%d,fail:%d\n",win,draw,fail);
                    outcome = 1;
                }
            }
        }
    }
    if (outcome != 1){
        printf("No solution!\n");
    }
    return 0;
}