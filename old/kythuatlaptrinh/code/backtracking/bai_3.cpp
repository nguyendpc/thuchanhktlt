// cho tap A gom n phan tu, tim tat ca cac chinh hop lap chap k phan tu cua A.
#include <stdio.h>

#define CHAP 2
int mang_a[100];
int mang_con[CHAP] = {};
int X = 5;
int chieudaimangA = 0;

void inmang(int mang[], int chieudaimang){
	for(int i =0;i< chieudaimang;i++){
		printf("%d ",mang[i]);
	}
	printf("\n");
}

int docmang(){
	FILE *file;
   	int c;
	
	
    file = fopen("mang.txt", "r");

    if(file == NULL){
   		printf("k mo duoc file \n");
	}else{
	   	printf("mo duoc roi \n");
	   	
	   	while ((c = getc(file)) != EOF){
	   		if(c != 32 && c!= 10 ){
	   			mang_a[chieudaimangA] = c - 48;
	   			++chieudaimangA;
			}
		}
	}
    // doc mang
    for(int j = 0 ; j < chieudaimangA ; j++){
    	printf("%d ", mang_a[j] );
	}
    printf(" \n --- \n");
    fclose(file);
	return 0;
}



int tinhtong( int mang[], int chieudaimang ){
	int sum = 0;
	for(int i =0;i< chieudaimang;i++){
		sum = sum + mang[i];
	}
	return sum;
}

void timchinhhoplap(int step){
	
	for(int i = 0; i< chieudaimangA ; i ++){
		mang_con[step] = mang_a[i];
		if( step < CHAP - 1){
			timchinhhoplap(step + 1);
		}else{
			 inmang(mang_con,CHAP); // in tat ca	
			// in co tong lon hon x
//			int tong = tinhtong(mang_con, CHAP);
//			if(tong >= X){
//				inmang(mang_con,CHAP);
//			}
		}
	}
}

int main(){
	docmang();
	timchinhhoplap(0);
}
