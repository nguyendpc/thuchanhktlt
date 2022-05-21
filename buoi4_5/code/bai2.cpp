#include <iostream>
#include <math.h>
using namespace std;

int n,k;
int mangGiaTri[500];
int mang[500];
int count = 0;
bool ban[500] = {false};

void inMang(){
	for(int i = 0;i < k; i++) 
	{
	
		cout << mang[i] << ' ';
	}
	++count;
	cout << '\n';
}



void chinhHop(int j){
	for(int i = 0; i < n; i++){
		if(!ban[i] ){
			mang[j] = mangGiaTri[i];
			if(j <  k - 1 ){
				ban[i] = true;
				chinhHop(j+1);
				ban[i] = false;
			} 
			else inMang();
		}
	}
}

int main(){
	cin >> k >> n;
	for(int i = 0 ;i < n; i++){
		 mangGiaTri[i] = i + 1;
	}
	
	chinhHop(0);
	cout << count;
	return 0;
}
