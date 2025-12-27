#include <bits/stdc++.h>
using namespace std;

int main()
{
	int total = 0;
	int length = 0;
	cin >> length;
	cin >> total;
	int arr[total];
	for (int i = 0;i<total;i++){
		cin >> arr[i];
	}
	int min = 0;
	int tmp = 0;
	length ++; 
	for (int i = 0;i < total;i++){
		tmp = (fabs(length - arr[i]) < fabs(0 - arr[i])) ? fabs(length - arr[i]) : fabs(0 - arr[i]);
		if (i == 0){
			min = tmp;
		}
		min = (tmp > min) ? tmp : min;
	}
	tmp = 0;
	int max = 0;
	for (int i = 0;i < total;i++){
		tmp = (fabs(length - arr[i]) > fabs(0 - arr[i])) ? fabs(length - arr[i]) : fabs(0 - arr[i]);
		max = (tmp > max) ? tmp : max;
	}
	cout << min <<" "<< max <<endl;
	return 0;
} 
