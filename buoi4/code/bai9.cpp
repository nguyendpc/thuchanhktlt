#include <iostream>
#include <math.h>
#include<algorithm>
using namespace std;

int luu[50] ; 
int t =0;
int A[] = {1,4};
int B[50] = {};
int n = sizeof(A)/sizeof(A[0]);


void inraMang(){
	sort(luu,luu + t);
	int tam = -1;
	for(int i = 0 ;i<t;i++){
		if(tam != luu[i]){
			cout << luu[i] << " ";
			tam = luu[i];	
		}
	}
	cout << endl;
}

void inketqua(){
	int tong = 0;
	for(int i = 0;i<n;i++) {
		tong = tong + A[i]*B[i];
	}
	if(tong != 0) {
		luu[t] = abs(tong);
		t++;
	}
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
	inraMang();
	return 0;
}
