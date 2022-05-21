#include <iostream>
#include <math.h>
using namespace std;

int n;
int trangThai[3] = {-1,0,1};


void inMang(int mang[]){
	int len = sizeof(mang)/sizeof(mang[0]);
	for(int i = 0;i < len; i++) cout << mang[i] << ' ';
	cout << '\n';
}

void soSanhCan(int listQuaCan[], int listQuaCanTemp[]){
	int tong = 0;
	for(int i = 0;i < n; i++) tong += listQuaCanTemp[i] * listQuaCan[i];
	if(tong != 0)
		cout << abs(tong) << '\n';
}

void can(int j,int listQuaCan[], int listQuaCanTemp[]){
	for(int i = 0; i < sizeof(trangThai)/sizeof(trangThai[0]); i++){
		listQuaCanTemp[j] = trangThai[i];
		if(j < n -1) can(j+1,listQuaCan,listQuaCanTemp);
		else
			soSanhCan(listQuaCan,listQuaCanTemp);	// = inmang()
	}
}


int main(){
	#ifndef ONLINE_JUDGE
	   freopen ("CANDIA1.INP", "r", stdin);
	   freopen ("CANDIA1.OUT", "w", stdout);
	#endif
	
	
	cin >> n;
	int listQuaCan[n];
	int listQuaCanTemp[n];
	for(int i = 0 ;i < n; i++){
		cin >> listQuaCan[i];
	}
	
	can(0, listQuaCan, listQuaCanTemp);
	return 0;
}
