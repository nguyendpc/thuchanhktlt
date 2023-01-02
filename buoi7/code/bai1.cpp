// Hieu so
#include<bits/stdc++.h> 
using namespace std;
#define MAX 10000

int n;
int A[MAX];
int B[MAX];

int HieuSo(int A[],int n){
	int max_chain = 0;
	// 6 8 1 4 3 
	int min = A[0];
	for(int i = 1;i < n; i++){
		if( min < A[i] ){
			int temp = A[i] - min;
			if(max_chain < temp){
				max_chain = temp;
			}
		}if( A[i] <  min){
			min = A[i];
		}
	}
	return max_chain;
}

int main(){
	cin >> n;
	for(int i = 0 ;i < n;i++) cin >> A[i];
	
	
	cout << HieuSo(A,n);
	return 0;
}
