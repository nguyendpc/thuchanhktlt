#include <stdio.h>
#define MAX 3
#define CHAP 4
int mangA[MAX] = { 1, 2 ,3};
int mangCon[CHAP] = {};
int dachon[MAX]= {};

void inmang(int mang[], int chieudaimang){
	for(int i = 0;i<chieudaimang;i++){
		printf("%d ",mang[i]);
	}
	printf("\n");
}

void hoanvi(int lap){
	for(int i = 0;i<MAX;i++){
		if( dachon[i] == 0  ){
			mangCon[lap] = mangA[i];
			dachon[i] = 1;
			if( lap < CHAP - 1 ){
				hoanvi(lap + 1 );
			}else{
				inmang(mangCon, CHAP);
			}
			dachon[i] = 0;
		}		
	}
}

int main(){
	
	hoanvi(0);
}
