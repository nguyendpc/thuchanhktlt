// cho tap A gom n phan tu, tim tat ca cac to hop chap k phan tu cua A.
#include <stdio.h>
#define MAX 3
#define CHAP 2
int mang_a[MAX] = {1,2,3};
int mang_con[CHAP] = {};

void inmang(int mang[], int chieudaimang){
	for(int i =0;i< chieudaimang;i++){
		printf("%d ",mang[i]);
	}
	printf("\n");
}

void timtohop(int step, int poi){
	for(int i = poi ; i< MAX ; i ++){
		mang_con[step] = mang_a[i];
		if( step < CHAP - 1){
			timtohop(step + 1, i+1);
		}else{
			inmang(mang_con,CHAP);
		}
	}
}

int main(){
	timtohop(0,0);
}
