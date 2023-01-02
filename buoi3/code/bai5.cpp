#include <iostream>
using namespace std;
// tinh tong cac phan tu cua mang bang pp de quy
// n = 5 => i = 0 1 2 3 4 (n-1) mang[5]=[2 2 2 1 1]
// i = 0 => S(0) = mang[0] => dk dung
// i = 1 => S(1) = mang[0] + mang[1]
// i = 2 => S(2) = S(1) + mang[2]
// ...
// dat n-1 = k
// S(k) = S(k - 1) + mang[k]

int tongMang(int mang[], int k){
	if( k == 0) return mang[0];
	return tongMang(mang,k-1) + mang[k];
}

int main(){
	int n;
	int mang[100];
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> mang[i];
	}
	cout << tongMang(mang, n - 1 );
	return 0;
}
