#include <stdio.h>

char swap(char c){
    if (c >= 'A' && c <= 'Z'){
        return (c - 'A' + 'a');
    }
    else{
        return c;
    }
}

int main()
{
    char origin_char;
    printf("Input the original char:");
    while ((origin_char = getchar()) != '\n'){
        char swapped = swap(origin_char);
        putchar(swapped);
    }
    return 0;
}