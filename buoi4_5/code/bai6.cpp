#include <iostream>
using namespace std;

int N;
int KetQua[200];
int mangDuLieu[2] = {0,1};


void inKqua(){
	for(int i = 0; i< N ; i++){
		cout << KetQua[i] << '\t';
	}
	cout << '\n';
}

void tim(int j){
	for(int i = 0;i < 2;i++){
		KetQua[j] = mangDuLieu[i];
		if( j < N - 1)
			tim(j + 1);
		else
			inKqua();
	}
}

int main(){
	cin >> N;
	tim(0);
	return 0;
}
