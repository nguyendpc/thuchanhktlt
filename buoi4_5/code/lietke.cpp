#include <iostream>
using namespace std;
int A[2] = {3,4};
int ab[2] = {0,0};

void inkqua(){
	for(int i=0;i<2;i++){
		cout<< ab[i];
	}
	cout<< '\n';
}

void thu(int i){
	for(int j=0;j<2;j++){
		ab[i] = A[j];
		if(i < 1) thu(i+1);
		else
			inkqua();
	}
}

int main(){
	thu(0);
	return 0;
}
