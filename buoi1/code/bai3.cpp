#include <bits/stdc++.h>
using namespace std;

int giaiThua(int i){
	if(i==0) return 1;
	return giaiThua(i-1)*i;
}

int tinhSn(int n){
	if(n==1) return 1;
	return tinhSn(n-1) + giaiThua(n);
}

int main(){
	int n;
	cin >> n;
	cout << tinhSn(n);
	return 0;
}
