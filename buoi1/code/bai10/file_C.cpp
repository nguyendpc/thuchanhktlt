#include <stdio.h>

#define ROWS 3
#define COLS 3

char tenFile[] = "exampleC.txt";

int matrix[ROWS][COLS] = {};    

void writeFile() {
    FILE* file = fopen(tenFile, "w");    // m? file d? ghi d? li?u, "w" là ch? d? ghi m?i

    if (file) {    // ki?m tra xem file dã du?c m? hay chua
    	for(int i=0;i<ROWS;i++){
    		for(int j=0;j<COLS;j++){
    			fprintf(file, "%d ", 1); 
			}
			fprintf(file, "\n"); 
		}
        fclose(file);
    }
    else {
        printf("Unable to open file");    // thông báo l?i n?u không th? m? file
    }

}

void readFile() {
    FILE* file = fopen(tenFile, "r");    
    if (file) {   
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                fscanf(file, "%d", &matrix[i][j]);    
            }
        }
        fclose(file);    
    }
    else {
        printf("Unable to open file");    
    }

}

int main(){
	writeFile();
	readFile();
	for(int i=0;i<ROWS;i++){
    	for(int j=0;j<COLS;j++){
    		printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

