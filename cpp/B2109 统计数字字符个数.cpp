#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[255];
	fgets(str,sizeof(str),stdin);
	int length = strlen(str);
	int total = 0;
	for (int i = 0;i<length-1;i++){
		if (str[i] >= '0' && str[i] <= '9'){
			total ++;
		}
	}
	cout <<total<<endl;
	return 0;
}
