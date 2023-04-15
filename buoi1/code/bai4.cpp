#include <iostream>
using namespace std;


long fibonacciC1(int N){
	long Fn[N];
	Fn[0] = 0;
	Fn[1] = 1;
	Fn[2] = 1;
	if(N <= 2) return 1;
	for(int i=3; i <= N; i++){
		Fn[i] = Fn[i-1] + Fn[i-2];
	}
	return Fn[N];
}


long fibonacciC2(int N){
	int f1 = 1;
	int f2 = 1;
	int fn;
	if(N < 0) return -1;
	if(N == 0) return 0;
	if(N <= 2) return 1;
	for(int i=3;i<=N ;i++){
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}

long fibonacciC3(int N){
	if(N <= 2) return 1;
	return fibonacciC3(N - 1) + fibonacciC3(N-2);
}

int main(){
	int N = 8;
	long phanTuThuN =  fibonacciC1(N);
	cout << phanTuThuN << endl;
	
	long phanTuThuN2 =  fibonacciC2(N);
	cout << phanTuThuN2 << endl;
	
	long phanTuThuN3 =  fibonacciC3(N);
	cout << phanTuThuN3;
	
	return 0;
}
