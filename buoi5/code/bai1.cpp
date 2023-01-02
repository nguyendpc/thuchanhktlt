#include <iostream>
using namespace std;
int x,n;

// x = 0 =>S(0) = 1
// x = 1 =>S(1) = x
// x chan => S(n) = (x^n/2)^2
// x le   => S(n) = x*(x^(n-1)/2)^2

int sqr(int x){
	return x*x;
}

int luyThua(int x, int n){
	if(n == 0) return 1;
	if(n%2==0) 
		return sqr( luyThua(x,n/2));
	else 
		return x*sqr( luyThua(x,(n-1)/2));
}

int main(){
	cin >> x >> n;
	cout << luyThua(x,n);
	return 0;
}
