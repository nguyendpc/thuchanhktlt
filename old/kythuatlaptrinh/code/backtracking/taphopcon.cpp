// cho tap A gom n phan tu, tim tat ca cac tap con cua A.
#include <stdio.h>
#define N 3

int mangA[N] = {1,4,2};
int mang_con[N] = {};

void timtapcon(int step){
	for(int i = 0 ; i < 2  ; i ++){
		mang_con[step] = i;
		if( step < N - 1){
			timtapcon(step + 1);
		}else{
			for(int i =0;i< N;i++){
				if(mang_con[i] == 1){
					printf("%d ", mangA[i]);
				}
			}
			printf("\n");
		}
	}
}

int main(){
	timtapcon(0);
}
