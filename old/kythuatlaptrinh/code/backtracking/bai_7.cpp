#include <stdio.h>

#define N 5
int tien[N] = { 1 , 1 , 4, 5 , 7 };
int tongtien = 0;
int cachchiatien[N] = {}; 
int binary[2] = {0,1};
int count = 0;


void kiemtra(int mang[]){
	int tiencuachauA = 0;
	int tiencuachauB = 0;
	for(int i=0;i<N;i++){
		if(mang[i] == 1  ){
			tiencuachauA = tiencuachauA + tien[ i ];
		}else{
			tiencuachauB = tiencuachauB + tien[i];
		}
	}
	if(tiencuachauA == tiencuachauB){
		++count;
		for(int i=0;i<N;i++){
			if(mang[i] == 1  ){
				printf("A ");
			}else{
				printf("B ");
			}
		}
		printf("\n");
	}
}

void chiatien(int lap){
	for(int i=0; i < 2 ; i++){
		cachchiatien[lap] = binary[i];
		if( lap < N - 1){
			chiatien( lap + 1 );
		}else{
			// kiem tra va in ra cach chia tien
			kiemtra(cachchiatien);
		}
	}
}

int main(){
	chiatien(0);
	if(count == 0){
		printf("k co cach nao");
	}
}
