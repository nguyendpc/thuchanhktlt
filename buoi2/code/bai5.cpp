#include <iostream>
using namespace std;
#define MAX 100

int b[MAX];
int n;
int k;

void inketqua(){
	for(int i = 0;i<n;i++){
		if(b[i] == 1) cout << a[i];
	}
	cout << endl;
}

void thu(int i){
	for(int j =1 ;j<=k;j++){
		b[i] = j;
		if(i<n-1) thu(i+1);
		else inketqua();
		b[i] = 0;
	}
}

int main(){
	cin << n << k;
	thu(0);
	return 0;
}
