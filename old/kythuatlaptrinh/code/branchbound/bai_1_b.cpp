// in ra tap con co tong nho hon x bang pp vet can
#include <stdio.h>
#define N 4
int mangA[N] = { 1,2,3,4};
int mangcon[N] = {}; 
int count = 0;
int x = 3;

int tinhtong(int mang[]){
	int tong = 0;
	for(int i = 0; i<N ;i++){
		if(mang[i] == 1){
			tong = tong + mangA[i];
		}
	}
	return tong;
}

void ingmang(int mang[]){
	int tong = tinhtong(mangcon);
	if(tong<=x){
		for(int i=0; i < N ; i++){
			if(mang[i]==1){
				printf("%d ",mangA[i]);
			}
		}
		printf("\n");
	}
}

void daycon(int lap){
	++count;
	for(int i=0; i < 2 ; i++){
		mangcon[lap] = i;
		if( lap < N - 1){
			daycon( lap + 1 );
		}else{
			ingmang(mangcon);
		}
	}
}

int main(){
	daycon(0);
	printf("so lan quet %d",count);
}
