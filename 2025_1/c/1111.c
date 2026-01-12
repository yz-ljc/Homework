#include <stdio.h>

void main()
{
	char s[]="23412532114";
	int v1=0,v2=0,v3=0,v4=0,k;
	for(k=0;s[k];k++){
		switch(s[k]){
			default: v4++;
			case '1': v1++;
			case '3': v3++;
			case '2': v2++;
		}
	}
	printf("%d %d %d %d",v1,v2,v3,v4);
	return 0;
}
