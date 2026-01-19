#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main() {

    char* ch = (char*)malloc(1000 * sizeof(char));
    char input;
    int isFirst = 1;
    int counter = 0;
    while (1){
        input = getchar();
        if (input != ' '){
            counter++;
        }
        if  (input == ' '){
            if (isFirst){
                printf("%d",counter);
                counter = 0;
                isFirst = 0;
            }
            else{
                printf(" %d",counter);
                counter = 0;
            }
        }
        if (input == '.'){
            break;
        }
    }
    free(ch);
    return 0;
}