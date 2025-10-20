#include <stdio.h>
int main()
{
    char charactor;
    printf("Input a charactor:");
    charactor = getchar();
    printf("%c----%d(ASCII)",charactor,(int)charactor);
    return 0;
}