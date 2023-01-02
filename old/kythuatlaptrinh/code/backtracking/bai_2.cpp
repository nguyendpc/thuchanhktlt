#include <stdio.h>
#include <stdlib.h>

int docfile() {

   FILE *fp;
   char buff[255];

   fp = fopen("data.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);
	return 0;
}

int docfile_toanbo(){
	FILE *file;
   	int c;
	
    file = fopen("data.txt", "r");
   
   if(file == NULL){
   		printf("k mo duoc file \n");
   }else{
   		printf("mo duoc roi \n");
   		while ((c = getc(file)) != EOF){
   			putchar(c);
		}
   }
   
   	fclose(file);
	return 0;
}

int docmang(){
	FILE *file;
   	int c;
	int mang[10000];
    file = fopen("mang.txt", "r");
    int i = 0;
    if(file == NULL){
   		printf("k mo duoc file \n");
	}else{
	   	printf("mo duoc roi \n");
	   	while ((c = getc(file)) != EOF){
	   		if(c != 32 && c!= 10){
	   			mang[i] = c - 48;
	   			++i;
			}
		}
	}
    // doc mang
    for(int j = 0 ; j < i ; j++){
    	printf("%d ", mang[j] );
	}
    printf("\n");
    fclose(file);
	return 0;
}

int docmatran(){
	FILE *file;
   	int c;
	int mang[100][100];
	int dong, cot;
	char buff[255];
	
    file = fopen("matran.txt", "r");
    
    if(file == NULL){
   		printf("k mo duoc file \n");
	}else{
	   	printf("mo duoc roi \n");
	   	
	   	fgets(buff , 255,  (FILE*)file );
	   	dong = atoi(buff);
	   
	   	fgets(buff , 255,  (FILE*)file );
	   	cot = atoi(buff);
	   
	   	int i = 0;
	   	int j = 0;
	   	while ((c = getc(file)) != EOF){
	   		if( j < cot && c != 32){
	   			mang[i][j] = c - 48;
	   			++j;
			}
			if(c == 10){
				j = 0;
				++i;
			}
		}
	}
    // doc mang
    printf("so dong la: %d \n", dong );
    printf("so cot la: %d \n", cot );
    for(int i = 0 ; i < dong ; i++){
    	for(int j = 0 ; j < cot ; j++){
    		printf("%d ", mang[i][j] );
		}
		printf("\n");
	}
    
    fclose(file);
	return 0;
}

int main(){
	char str[10] = "122 \n";
    int x = atoi(str);
    printf("Converting '122': %d\n", x);
	docmatran();
}
