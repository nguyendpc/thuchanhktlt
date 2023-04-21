#include<iostream>
using namespace std;

int luyThua(int a, int n){
	if(n==1) return a;
	int t = luyThua(a,n/2);
	if(n%2 ==0) return t*t;
	else return a*t*t;	
}

int main(){
	int a=2,n=3;
	cin >> a,n;
	cout << luyThua(a,n);
	return 0;
}
