#include <iostream>
using namespace std;

int A[] = {1,2,3};
int B[50] = {0};
int n = sizeof(A)/sizeof(A[0]);
int k = 2;
int mangBan[50] = {0};

void inketqua(){
	for(int i = 0 ;i<k;i++){
		cout << B[i];
	}
	cout << endl;
}

void thu(int i){
	for(int j = 0;j<n;j++){
		if(mangBan[j] == 0){
			B[i] = A[j];
			if(i < k-1) {
				mangBan[j] = 1;
				thu(i+1);
				mangBan[j] = 0;
			}
			else inketqua();
		}
	}
}

int main(){
	thu(0);
	return 0;
}
