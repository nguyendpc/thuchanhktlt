// cho tap A gom n phan tu, tim tat ca cac tap con cua A.
#include <stdio.h>
#define MAX 4
#define CHAP 3
int mang_a[MAX] = {1,2,3,0};
int mang_con[CHAP] = {};

void inmang(int mang[], int chieudaimang){
	for(int i =0;i< chieudaimang;i++){
		printf("%d ",mang[i]);
	}
	printf("\n");
}

void timtohop(int step, int poi){
	for(int i = poi ; i< MAX  ; i ++){
		mang_con[step] = mang_a[i];
		if( step < CHAP - i){
			timtohop(step + 1, i + 1);
		}else{
			inmang(mang_con,CHAP);
		}
	}
}

int main(){
	timtohop(0,0);
}
