// Hieu so
#include<bits/stdc++.h> 
using namespace std;
#define MAX 10000

int n;
int A[MAX];
int B[MAX];

int HieuSo(int A[],int n){
	int max_chain = 0;
	int j=0; 
	int pivot = A[0];
	for(int i = 1;i < n; i++){
		if( pivot < A[i] ){
			int temp = A[i] - pivot;
			B[j] = temp;
			j++;
		}
		if( A[i] <  pivot){
			pivot = A[i];
		}
	}
	for(int i =0;i<j;i++) {
		if(max_chain < B[i]) max_chain = B[i];
	}
	return max_chain;
}

int main(){
	cin >> n;
	for(int i = 0 ;i < n;i++) cin >> A[i];
	cout << HieuSo(A,n);
	return 0;
}
