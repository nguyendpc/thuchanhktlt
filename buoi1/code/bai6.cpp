#include <bits/stdc++.h>
using namespace std;

long long int giaiThua(int i){
	if(i==0) return 1;
	return giaiThua(i-1)*i;
}
int main(){
	int n;
	cin >> n;
	cout << giaiThua(n);
	return 0;
}
