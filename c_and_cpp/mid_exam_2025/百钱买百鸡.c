#include <stdio.h>

int main()
{
	int x,y,z,m,n,found = 0;
	printf("x+2y+z=m\n");
	printf("3x+2y+2z=n\n");
	printf("Input m n:\n");
	scanf("%d %d",&m,&n);
	printf("   x    y    z\n");
	for (x = 1;x <= m;x++){
		for (y = 1;y <=m/2;y++){
			for (z = 1; z <= m;z++){
				if (x+2*y+z == m && 3*x+2*y+2*z == n){
					printf("%4d %4d %4d\n",x,y,z);
					found = 1;
				}
			}
		}
	}
	if (!found){
		printf("No solution!");
	}
	return 0;
}
