#include <stdio.h>
#include <math.h>

int main()
{
	const double x = 3.14159/4;
	double eps,x0 = x,x1;
	printf("Input eps:\n");
	scanf("%lf",&eps);
	x1 = x0;
	do{
		x1 = x0 - ((cos(x0) - x0) / (-sin(x0) - 1));
		x0 = x1;
	}while (fabs(cos(x1) - x1) > eps); //原函数的数值 
	printf("cos(x)-x=0,x=%.8lf",x1);
	return 0;
}
