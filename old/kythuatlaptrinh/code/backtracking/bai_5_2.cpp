// cho tap A gom n phan tu, tim tat ca cac tap con cua A.
#include <stdio.h>
#define MAX 3

int mangA[MAX] = {1,4,2};
int mang_con[MAX] = {};

void inmang(int mang[], int chieudaimang){
	for(int i =0;i< chieudaimang;i++){
		if(mang[i] == 1){
			printf("%d ", mangA[i]);
		}
	}
	printf("\n");
}

void timtapcon(int step){
	for(int i = 0 ; i < 2  ; i ++){
		mang_con[step] = i;
		if( step < MAX - 1){
			timtohop(step + 1);
		}else{
			inmang(mang_con,MAX);
		}
	}
}

int main(){
	timtapcon(0);
}
