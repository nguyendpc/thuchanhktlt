#include <bits/stdc++.h>
using namespace std;

int tinhSn(int n){
	if(n==1) return 1;
	return tinhSn(n-1) + n*n;
}

int main(){
	int n;
	cin >> n;
	cout << tinhSn(n);
	return 0;
}
