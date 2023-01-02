#include <iostream>
using namespace std;

// S(n) = 1^2+2^2+3^2+....+n^2 
// n = 1 => S[1] = 1
// n = 2 => S[2] = 1 + 2^2 = S[1] + 2^2
// n = 3 => S[3] = 1 + 2^2 + 3^2 = S[2] + 3^2
// ...
// S[n] = S[n-1] + n^2


int tinhSn(int n){
	if(n == 1) return 1;
	return tinhSn(n-1) + n*n;
}

int main(){
	int n;
	cin >> n;
	cout << tinhSn(n);
	return 0;
}
