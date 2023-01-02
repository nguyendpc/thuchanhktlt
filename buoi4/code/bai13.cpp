#include <iostream>
using namespace std;
#define MAX 100

int a[]={5 ,4 ,6};
int b[MAX];
int n = sizeof(a)/sizeof(a[0]);

void inketqua(){
	int s = 0;
	int tam[MAX];
	int k = 0;
	for(int j = 0;j<n;j++){
		if(b[j] == 1){
			tam[k] = a[j];
			k++;
		}
	}
	for(int j = 1;j<n;j++){
		if(tam[j] < tam[j-1]){
			s++;
		}
	}
	if(s == 0){
		cout << endl;
		for(int i = 0;i<k;i++){
			cout << tam[i];
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
	return 0;
}
