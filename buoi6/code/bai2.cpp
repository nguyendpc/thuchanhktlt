#include <bits/stdc++.h>
using namespace std;

int TILE(int n, int arr[]){
	sort(arr, arr+n, greater<int>());
	int h = 1;
	int min = arr[0];
	while( min > 0 && h < n ){
		min -=1;
		if(min > arr[h]) min = arr[h];
		h+=1;
	}
	return h;
}

int main(){
	int n;
	int arr[100];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << TILE(n,arr);
	return 0;
}
