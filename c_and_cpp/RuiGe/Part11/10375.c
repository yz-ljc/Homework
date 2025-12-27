#include <stdio.h>
#include <string.h>
#include <math.h>

int stoi(char str[128])
{
    int result = 0;
    int total = strlen(str);       
    for (int i = 0;i<total;i++){
        if (str[i] == '-'){
            result += 0;
        }
        //if i input the number of -123,total - 1 -1 = 2,that means str[1] = 1 * 10^2
        //actually if i input 123,total - 0 -1 = 2,that is str[0] = 1 *10^2
        //Absoluately it is true
        else{
            result += (str[i] - 48)*(pow(10,total-i-1));
        }
    }
    if (str[0] == '-'){
        result = result * (-1);
    }
    return result;
}

int main()
{
    char str[128];
    printf("Input a string:");
    scanf("%s",str);
    int outcome = stoi(str);
    printf("Int:%d",outcome);
    return 0;
}