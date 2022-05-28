#include <iostream>
#include <math.h>
using namespace std;

int n,k;
int mangGiaTri[500];
int mang[500];
int count = 0;

void inMang(){
	for(int i = 0;i < k; i++) 
	{
	
		cout << mang[i] << ' ';
	}
	++count;
	cout << '\n';
}


void chinhHopLap(int j){
	for(int i = 0; i < n; i++){
		mang[j] = mangGiaTri[i];
		if(j <  k - 1 ) chinhHopLap(j+1);
		else
			inMang();	
	}
}

int main(){
	cin >> k >> n;
	for(int i = 0 ;i < n; i++){
		 mangGiaTri[i] = i + 1;
	}
	
	chinhHopLap(0);
	cout << count;
	return 0;
}
