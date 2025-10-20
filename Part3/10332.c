#include <stdio.h>
int main()
{
    unsigned short int word;
    printf("Input a unsigned short int :");
    scanf("%hud",&word);
    unsigned char high = (word >> 8)  & 0xFF;
    unsigned char low = word & 0x00FF;
    printf("%hx--->%hx,%hx",word,high,low);
    return 0;
}
//%hx %hxx %hud %hu %x