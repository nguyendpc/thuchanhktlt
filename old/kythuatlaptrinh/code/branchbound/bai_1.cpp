// in ra tap con co tong nho hon x bang pp nhanh can
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
	for(int i=0; i < N ; i++){
		if(mang[i]==1){
			printf("%d ",mangA[i]);
		}
	}
	printf("\n");
}

void daycon(int lap){
	++count;
	for(int i=0; i < 2 ; i++){
		mangcon[lap] = i;
		int tong = tinhtong(mangcon);
		if(tong <=x){
			if( lap < N - 1){
				daycon( lap + 1 );
			}else{
				ingmang(mangcon);
			}
			mangcon[lap] = 0;
		}else{
			mangcon[lap] = 0;
			break;
		}
		
	}
}

int main(){
	daycon(0);
	printf("so lan quet %d",count);
}
