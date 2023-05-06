#include <bits/stdc++.h>
using namespace std;

int VASU(int n, int arr[]){
	sort(arr, arr+n, greater<int>());
	int soLit = 0;
	int tru = 1;
	for(int i = 0;i<n;i++){
		if(arr[i] > 0)
		{
			soLit += arr[i];
			arr[i+1] -= tru;
			tru++;
		}
		else break;
	}
	return soLit;
}

int main(){
	#ifndef ONLINE_JUDGE
	   freopen ("VASU.INT", "r", stdin);
	   //freopen ("VASU.OUT", "w", stdout);
	#endif

	int n;
	int arr[10000];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << VASU(n,arr);
	return 0;
}
