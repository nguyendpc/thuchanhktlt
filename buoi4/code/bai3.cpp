#include <iostream>
using namespace std;

int A[] = {1,2,3};
int B[] = {};
int n = sizeof(A)/sizeof(A[0]);
int k = 2;

void inketqua(){
	for(int i = 0 ;i<k;i++){
		cout << B[i];
	}
	cout << endl;
}

void thu(int i){
	for(int j = 0;j<n;j++){
		B[i] = A[j];
		if(i < k-1) thu(i+1);
		else inketqua();
	}
}

int main(){
	thu(0);
	return 0;
}
