// cho tap A gom n phan tu, tim tat ca cac chinh hop lap chap k phan tu cua A.
#include <stdio.h>
#define MAX 3
#define CHAP 3
int mang_a[MAX] = {1,2,3};
int mang_con[CHAP] = {};
int X = 5;
int count = 0;

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
	++count;
	for(int i = 0; i< MAX ; i ++){
		mang_con[step] = mang_a[i];
		if( step < CHAP - 1){
			timchinhhoplap(step + 1);
		}else{
			// in co tong lon hon x
			int tong = tinhtong(mang_con, CHAP);
			if(tong >= X){
				inmang(mang_con,CHAP);
			}
		}
	}
}

int main(){
	timchinhhoplap(0);
	printf("so lan quet %d",count);
}
