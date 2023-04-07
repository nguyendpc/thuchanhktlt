#include <bits/stdc++.h>
using namespace std;

float tinhSn(int n){
	if(n==1) return 1;
	return tinhSn(n-1) + (float)1/n;
}

int main(){
	int n;
	cin >> n;
	cout << tinhSn(n);
	return 0;
}
