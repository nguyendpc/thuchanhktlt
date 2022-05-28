#include <iostream>
#include <math.h>
using namespace std;

int n;
int trangThai[3] = {-1,0,1};
int mangLuuKg[10000];
int dem = 0;

void inMang(int mang[], int chieudaimang){
	for(int i = 0;i < chieudaimang; i++) 
	{
		cout << mang[i] << ' ';
	}
	cout << '\n';
}

void soSanhCan(int listQuaCan[], int listQuaCanTemp[]){
	int tong = 0;
	for(int i = 0;i < n; i++) tong += listQuaCanTemp[i] * listQuaCan[i];
	tong = abs(tong);
	if(tong != 0)
	{
		bool check = true;
		for(int j = 0;j<dem;j++){
			if(mangLuuKg[j] == tong){
				check = false;  
				break;
			}
		}
		if(check== true){
			cout << tong << " ";
			mangLuuKg[dem] = tong;
			++dem;
		}	
	}
}

void can(int j,int listQuaCan[], int listQuaCanTemp[]){
	for(int i = 0; i < 3; i++){
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
