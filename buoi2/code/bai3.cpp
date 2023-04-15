#include <iostream>
using namespace std;
#define MAX 100

int a[]={1,2,4};
int b[MAX];
int n = sizeof(a)/sizeof(a[0]);
int P = 11;

void inketqua(){
	for(int i = 0;i<n;i++){
		if(b[i] == 1) cout << a[i];
	}
	cout << endl;
}

void thu(int i){
	for(int j =0 ;j<=1;j++){
		b[i] = j;
		if(i<n-1) thu(i+1);
		else inketqua();
		b[i] = 0;
	}
}

int main(){
	thu(0);
	return 0;
}
