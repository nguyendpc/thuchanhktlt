#include <iostream>
using namespace std;
#define MAX 100

int a[]={5,-4,6,1};
int b[MAX];
int n = sizeof(a)/sizeof(a[0]);
int lonNhat = 0;
int mangTam[MAX];

void inketqua(){
	int s = 0;
	for(int j = 0;j<n;j++){
		if(b[j] == 1) s = s + a[j];
	}
	if(s > lonNhat ) {
		lonNhat = s;
		for( int j = 0;j<n;j++){
			mangTam[j] = b[j];
		}
	}
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
	cout << lonNhat << endl;
	for(int i =0;i<n;i++){
		if(mangTam[i] == 1) cout << a[i] << " ";
	}
	return 0;
}
