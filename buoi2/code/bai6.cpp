#include <iostream>
using namespace std;
#define MAX 100

int luu[MAX][MAX];
int iLuu = 0;
int A[MAX];
int B[MAX];
int n;
int k = 2;
int M;

// -1 tru, 0 nhan, 1 cong
char dau(int d){
	if(d == -1) return '-';
	if(d == 1) return '+';
	return '*';
}

int tinhTong(int dau, int a, int b){
	if(dau == 0) return a*b;
	return a + dau*b;
}

void inketqua(int M){
	int tong = 0;
	if(B[0] == 0){
		tong = tinhTong(B[1],A[0]  *  A[1],A[2]) ;
	}else{
		tong =  A[0]  +  tinhTong( B[1],B[0]*A[1], A[2]);
	}
	if(tong == M){
		for(int i =0;i<k;i++){
			luu[iLuu][i] = B[i];
		}
		iLuu++;
	}
}

void thu(int i, int M){
	for(int j = -1;j<=1;j++){
		B[i] = j;
		if(i < k-1) thu(i+1,M);
		else inketqua(M);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	   freopen ("DIENDAU1.txt", "r", stdin);
	   freopen ("DIENDAU_KQ.txt", "w", stdout);
	#endif
	cin >> A[0] >> A[1] >> A[2] >> M;
	
	thu(0, M);
	// in ket qua
	if(iLuu == 0){
		cout << 0;
	}else{
		for(int i=0;i<iLuu;i++){
			cout<< A[0] << dau(luu[i][0]) << A[1] << dau(luu[i][1]) << A[2] << "=" << M<< endl;
		} 
	}
	
	return 0;
}
