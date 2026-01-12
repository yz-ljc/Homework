#include <stdio.h>

int main()
{
	int n;
	printf("Input longest line:\n");
	scanf("%d",&n);
	for (int i = n-1;i>0;i--){
		for (int j = 1;j <= i;j++){
			printf(" ");
		}
		for (int k = 2*n-3;k >=2*i-1;k--){
			printf("%%");
		}
		printf("\n");
	}
	for (int i = 1;i<2*n;i++){
		printf("%%");
	}
	printf("\n");
	for (int i = 1;i <= n-1;i++){
		for (int j = 1;j <= i;j++){
			printf(" ");
		}
		for (int k = 1;k <= 2*(n-i)-1;k++){
			printf("%%");
		}
		printf("\n");
	}
	return 0;
}
