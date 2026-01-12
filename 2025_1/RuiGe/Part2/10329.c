#include <stdio.h>
int main()
{
    char recipient[20], sender[20];
    printf("Input the recipient:Input the sender:\n");
    scanf("%s %s",recipient,sender);
    printf("########################################\n");
    printf("Dear %s\n",recipient);
    printf("\n");
    printf("    Happy birthday to you!\n");
    printf("\n");
    printf("sincerely yours %s\n",sender);
    printf("########################################\n");
    return 0;
}