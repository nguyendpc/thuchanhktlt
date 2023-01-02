// cho tap A gom n phan tu, tim tat ca cac tap con cua A.
#include <stdio.h>
#define MAX 2
#define CHAP 3
int binary[MAX] = {0,1};
int mangA[CHAP] = {1,4,2};
int mang_con[CHAP] = {};
int isMax = 0;
int mangMax[1000][CHAP];
int chieudaimangMax = 0;

// cau b
int kiemtratanglonnhat(int mang[], int chieudaimang){
	int count ;
	count = mang[0];

	for(int i = 0 ;i < chieudaimang  - 1;i++){
		if(   mang[i] > mang[i+1] ){
			return -1;
		}
		count = count + mang[i+1];
	}
	
	return count;
}

void timmax(int mang[]){
	int dichmang[CHAP];
	int len_dichmang = 0;
	for(int i =0;i< CHAP;i++){
		if(mang[i] == 1){
			dichmang[len_dichmang] = mangA[i];
			++len_dichmang;
		}
	}
	if(len_dichmang> 0 ){
		int kiemtra = kiemtratanglonnhat(dichmang, len_dichmang);
		if(kiemtra > isMax){
			isMax = kiemtra;
			for(int i = 0;i < len_dichmang;i++){
				mangMax[chieudaimangMax][i] = dichmang[i];
			}
		}else if (kiemtra == isMax){
			++chieudaimangMax;
			for(int i = 0;i < len_dichmang;i++){
				mangMax[chieudaimangMax][i] = dichmang[i];
			}
		}
	}
	
}

void inmang(int mang[1000][CHAP]){
	for(int i = 0; i < chieudaimangMax + 1;i++ ){
		for(int j = 0; j < CHAP ;j++){
			if(mang[i][j]){
				printf("%d ",mang[i][j]);
			}
		}
		printf("\n");
	}
}


void timtohop(int step){
	for(int i = 0 ; i< MAX  ; i ++){
		mang_con[step] = binary[i];
		if( step < CHAP - 1){
			timtohop(step + 1);
		}else{
			timmax(mang_con);
		}
		
	}
}

int main(){
	timtohop(0);
	inmang(mangMax);
}
