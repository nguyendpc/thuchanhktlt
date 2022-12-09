#include <bits/stdc++.h>
using namespace std;

int CAMDIEN(int n, int m, int arr[]){
	sort(arr, arr+n, greater<int>());
	int dem = 1;
	int choCam = arr[0];
	if( m==1 )return 0;
	if(choCam > m) return 1;
	
	for(int i = 1;i<n;i++){
		choCam = choCam - 1 + arr[i];
		dem += 1;
		if(choCam >= m) break;
	}	
	if(  dem == n && choCam < m ) return -1;
	return dem;
}

int main(){
	int n,m;
	int arr[100];
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << CAMDIEN(n,m,arr);
	return 0;
}
