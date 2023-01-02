// cho tap A gom n phan tu, tim tat ca cac chinh hop lap chap k phan tu cua A.
#include <stdio.h>
#define MAX 2
#define CHAP 3
int mang_a[MAX] = {0,1};
int mang_con[CHAP] = {};
int X = 5;


void inmang(int mang[], int chieudaimang){
	for(int i =0;i< chieudaimang;i++){
		printf("%d ",mang[i]);
	}
	printf("\n");
}

int tinhtong( int mang[], int chieudaimang ){
	int sum = 0;
	for(int i =0;i< chieudaimang;i++){
		sum = sum + mang[i];
	}
	return sum;
}

void timchinhhoplap(int step){
	for(int i = 0; i< MAX ; i ++){
		mang_con[step] = mang_a[i];
		if( step < CHAP - 1){
			timchinhhoplap(step + 1);
		}else{
			inmang(mang_con,CHAP);
		}
	}
}

int main(){
	timchinhhoplap(0);
}
