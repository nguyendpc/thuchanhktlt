#include<iostream>
using namespace std;

const int n = 2;
const int m = 2;

int mang[n][m];

void nhapMang(){
	for(int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> mang[i][j];
		}
	}
}

int timMin(int mang[n][m]){
	int min = mang[0][0];
	for(int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			if(min > mang[i][j]) min =mang[i][j];
		}
	}
	return min;
}

int main(){
	nhapMang();
	cout << timMin(mang);
	return 0;
}
