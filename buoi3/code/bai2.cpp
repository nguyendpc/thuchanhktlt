#include <iostream>
using namespace std;

// S(n) = 1 + 1/2 + 1/3 + ... + 1/n 
// n = 1 => S(1) = 1
// n = 2 => S(2) = 1 + 1/2
// n = 3 => S(3) = 1 + 1/2 + 1/3 = S(2) + 1/3
// n = 4 => S(4) = 1 + 1/2 + 1/3 + 1/4 = S(3) + 1/4
// ...
// S(n) = S(n-1) + 1/n

float tinhSn(int n){
	if(n == 1) return 1;
	return tinhSn(n-1) + (float)1/n;
}

int main(){
	#ifndef ONLINE_JUDGE
	   freopen ("input.txt", "r", stdin);
	   freopen ("output.txt", "w", stdout);
	#endif
	int n;
	cin >> n;
	cout << tinhSn(n);
	return 0;
}
