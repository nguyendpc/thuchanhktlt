#include <iostream>
#include <math.h>
using namespace std;
// n = 5 => 0 1 2 3 4
// i = 0 => soBuoc[0] = mang[0]
// i = 1 => soBuoc[1] = mang[0] + mang[1]
// i = 2 => soBuoc[2] = mang[0] + mang[1] + mang[2] = soBuoc[1] + mang[2]
// ...
// i = n => soBuoc[n] = soBuoc[n-1] + mang[n]
// (-1)^n = 1 neu n chan
// (-1)^n = -1 neu n le

int demSoBuoc(int mang[], int n){
	if(n == 0) return pow(-1,mang[n]);
	return demSoBuoc(mang, n-1) + pow(-1,mang[n]);
}

int main(){
	int n;
	int mang[100];
	cin >> n;
	for(int i = 0;i<n;i++){
		cin>>mang[i];
	}
	cout << abs(demSoBuoc(mang,n-1));
	return 0;
}
