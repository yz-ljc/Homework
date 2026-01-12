#include <bits/stdc++.h>
using namespace std;
int Isprime(int n){
	for (int i = 2;i<n;i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int total = 0;
	cin >> total;
	int arr[2] = {0};
	int j = 0;
	int found = 0;
	for (int i = 3;i<=total;i++){
		if (Isprime(i)){
			arr[j] = i;
			j++;
		}
		if (j >= 2){
			if (arr[1] - arr[0] == 2){
				cout <<arr[0]<<" "<<arr[1]<<endl;
				found = 1;
			}
			j = 1;
			arr[0] = arr[1];
		}
	}
	if (found == 0){
		cout << "empty"<<endl;
	}
	return 0;
}
