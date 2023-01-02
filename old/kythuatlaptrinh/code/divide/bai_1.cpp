#include <iostream>
using namespace std;
int nummod = 10000;
long long  compute_exp_divide(int a, int n){
	if(n == 1) return a;
	long long  t = compute_exp_divide(a,n/2);
	if( n%2==0 ){
		return (t% nummod)*(t% nummod) ;
	}else{
		return (t% nummod)*(t% nummod)*(a% nummod) ;
	}
}

int main(){
	int x,n;
	cin >> x >> n;
	long long  e = compute_exp_divide(x,n);
	cout << e;

}
