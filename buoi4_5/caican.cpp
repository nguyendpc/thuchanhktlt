#include <iostream>
using namespace std;
int A[5] = {3,5,2,1,1};
int ab[5] = {0,0,0,0,0};
int tt[3] = {-1,0,1};

void inCaiMang(){
	for(int i=0;i<5;i++){
		if(ab[i] == -1 ){
			cout<< "trai:" << A[i] << " ";
		}
		if(ab[i] == 1 ){
			cout<< "phai:" << A[i] << " ";
		}
	}
	cout<< '\n';
}
void inkqua(){
	int tong = 0;
	for(int i = 0;i<5;i++){
		tong = tong + ab[i] * A[i];
	}
	if(tong == 0){
		inCaiMang();
	}
}

void thu(int i){
	for(int j=0;j< n ;j++){
		ab[i] = tt[j];
		if(i < k-1  ) thu(i+1);
		else
			inkqua();
	}
}

int main(){
	thu(0);
	return 0;
}
