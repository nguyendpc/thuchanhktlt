#include <iostream>
using namespace std;

int A[] = {1,2,3};
int B[] = {};
int n = sizeof(A)/sizeof(A[0]);
int k = 2;

void inraMang(){
	for(int i = 0 ;i<n;i++){
		cout << A[i]*B[i];
	}
	cout << endl;
}

void inketqua(){
	int tong = 0;
	for(int i = 0;i<n;i++) {
		tong = tong + A[i]*B[i];
	}
	if(tong == 0) inraMang();
}

void thu(int i){
	for(int j = -1;j<=1;j++){
		B[i] = j;
		if(i < n-1) thu(i+1);
		else inketqua();
	}
}

int main(){
	thu(0);
	return 0;
}
