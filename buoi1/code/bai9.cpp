#include<iostream>
using namespace std;

const int n = 2;
const int m = 2;

int mang[n][m];
int flag[n];

void nhapMang(){
	for(int i = 0;i<n;i++){
		int dem = 0;
		for(int j=0;j<m;j++){
			cin >> mang[i][j];
			if(mang[i][j] < 0) dem++;
		}
		if(dem == m) flag[i] = 1;
		else flag[i] = 0;
	}
}

int main(){
	nhapMang();
	for(int i=0;i<n;i++){
		if(flag[i] == 1){
			for(int j=0;j<m;j++){
				cout << mang[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
