#include <iostream>
using namespace std;

int inMang(int mang[], int l){
	for(int i = 0;i< l; i ++) cout << mang[i] << "\t" ;
	cout << endl;
}

int timPhanTuLonThuK(int end, int p, int k, int mang[]){
	int tamA[7];
	int tamB[7];
	int i = 0, j = 1, start = 0;
	while( start < end  ){
		if(mang[start] < mang[p] ){
			tamA[i] = mang[start];
			i++;
		}else{
			if( start != p ){
				tamB[j] = mang[start];
				j++;
			}else{
				tamB[0] = mang[start];
			}
		}
		start++;
	}
	
	if( j == k ) return tamB[0];
	else if( j > k )  timPhanTuLonThuK( j , j/2 , k , tamB);
	else timPhanTuLonThuK( i , i/2 , k - j , tamA);
}

int main(){
	int n = 7;
	int k = 1;
	int A[n] = {5,1,6,7,14,9,8};
	for(int i = 1;i<= n;i++){
		cout << timPhanTuLonThuK(n,n/2,i, A) << endl;
	}
	
	return 0;
}
