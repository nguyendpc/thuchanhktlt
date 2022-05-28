#include <stdio.h>
#define MAX 2
//#define CHAP 4
int mang_a[MAX] = {1,0};

int CHAP;
int m = 0;

int dem(int mang[]){
	int tongA = 0;
	int tongB = 0;
	if(mang[0] != 0 && mang[CHAP - 1] != 1  ){
		for(int i =0;i< CHAP;i++){
			if(mang[i] == 1){
				++tongA;
			}else{
				++tongB;
			}
			if(tongA < tongB){
				break;
			}
		}
	}
	return tongA;
}

void inmang(int mang[], int chieudaimang){
	int tong = dem(mang);
	if(tong == CHAP/2  ){
		++m;
		for(int i =0;i< chieudaimang;i++){
			if(mang[i] == 1){
				printf("(");
			}else{
				printf(")");
			}
		}
		printf("\n");
	}	
}

void timchinhhoplap(int step, int mang_con[]){
	for(int i = 0; i< MAX ; i ++){
		mang_con[step] = mang_a[i];
		if( step < CHAP - 1){
			timchinhhoplap(step + 1, mang_con);
		}else{
			inmang(mang_con,CHAP); 
		}
	}
}

int main(){
	scanf("%d", &CHAP);
	int mang_con[CHAP] = {};
	timchinhhoplap(0, mang_con);
	printf("%d", m);
}
    
