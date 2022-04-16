#include <iostream>
using namespace std;


long fibonacciBU2(int N){
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


long fibonacciBU(int N){
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

long fibonacciTD(int N){
	if(N <= 2) return 1;
	return fibonacciTD(N - 1) + fibonacciTD(N-2);
}

int main(){
	int N = 6;
	long phanTuThuN =  fibonacciBU(N);
	cout << phanTuThuN << endl;
	
	long phanTuThuN2 =  fibonacciTD(N);
	cout << phanTuThuN2 << endl;
	
	long phanTuThuN3 =  fibonacciBU2(N);
	cout << phanTuThuN3;
	
	return 0;
}
