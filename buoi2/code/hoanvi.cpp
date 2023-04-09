#include <iostream>
using namespace std;

int n = 3;
int a[50] ;
int b[50] ;


void inketqua(){
	for(int i = 1 ;i<n;i++){
		cout << a[i];
	}
	cout << endl;
}

void thu(int i){
	for(int j = 1;j<=n;j++){
		if(b[j] == 0){
			a[i] = j;
			b[j] = 1;
			if(i < n-1) {
				thu(i+1);		
			}
			else {
				inketqua();
			}
			a[i] = j;
			b[j] = 0;
		}
	}
}

int main(){

	thu(0);
	return 0;
}
