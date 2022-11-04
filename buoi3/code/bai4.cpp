#include <iostream>
using namespace std;
// tinh giai thua
// n = 1 => S(1) = 1
// n = 2 => S(2) = 2*1
// n = 3 => S(2) = 3*2*1 = 3*S(2)
// ...
// S(n) = n*S(n-1)

int giaiThua(int n){
	if(n == 1) return 1;
	return n*giaiThua(n-1);
}

// S(n) = 1! + 2! + 3! + · · · + n!
// n = 1 => S(1) = 1!
// n = 2 => S(2) = 2! + 1!
// n = 3 => S(3) = 3! + 2! + 1! = 3! + S(2)
// ...
// S(n) = n! + S(n-1)
int tinhTongGiaiThua(int n){
	if(n == 1) return 1;
	return giaiThua(n) + tinhTongGiaiThua(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << tinhTongGiaiThua(n);
	return 0;
}
