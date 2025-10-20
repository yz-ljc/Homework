#include <stdio.h>

int main()
{
    int guess;
    int ans = 100;
    int i = 0;
    printf("Game Begin!\n");
    while (i<3){
        printf("Input your guess: ");
        scanf("%d",&guess);
        i++;
        if (guess < ans){
            printf("Too small!\n");
        }
        else if (guess == ans){
            printf("Correct!Count=%d\n",i);
            break;
        }
        else{
            printf("Too big!\n");
        }
    }
    if (guess != ans && i == 3){
        printf("You have no chance!\n");
    }
    return 0;
}