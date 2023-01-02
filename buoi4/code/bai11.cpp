#include <iostream>
using namespace std;
#define MAX 100

char data[MAX][MAX];
int B[MAX];
int Ban[MAX];
int n;

void inketqua(){
	int dem = 0;
	for(int i = 0 ;i<2*n;i++){
		int x = B[i] - 1;
		int y = B[i+1]-1;
		if( i+1 == 2*n) y  = 0;
			
		if(data[x][y] == '1' ){
			dem++;
			break;
		}
	}
	if(dem == 0){
		for(int i = 0 ;i<2*n;i++){
			cout << B[i];
		}
		cout << endl;
	}
	
}

void thu(int i){
	for(int j = 1;j<=2*n;j++){
		if(Ban[j] == 0){
			B[i] = j;
			if(i < 2*n-1){
				Ban[j] = 1;
				thu(i+1);
				Ban[j] = 0;
			}
			else inketqua();
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	   freopen ("XEPKH.INP", "r", stdin);
	   //freopen ("XEPKH.OUT", "w", stdout);
	#endif
	cin >> n;
	for(int i = 0; i < 2*n; i++){
		for(int j = 0; j < 2*n; j++){
			cin >> data[i][j];
		}
	}

	thu(0);
	return 0;
}
