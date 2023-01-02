#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int arr_root[MAX][MAX] = { {1,2,3},{5,8,6},{7,4,0} };
int arr_goal[MAX][MAX] = { {0,1,3},{5,2,8},{7,4,6} };

 
int zero_poi[2];
int zero_poi_old[2] = {};
// top right bottom left
int zero_poi_row[4];
int zero_poi_col[4];

struct arr2d{
	int m[MAX][MAX];
};

int printMatrix(arr2d matrix) 
{ 
    for (int i = 0; i < MAX; i++) 
    { 
        for (int j = 0; j < MAX; j++) {
        	printf("%d ", matrix.m[i][j]); 
		}
        printf("\n"); 
    } 
} 

void find_zero_poi(arr2d matrix){
	for (int i = 0; i < MAX; i++) 
    { 
        for (int j = 0; j < MAX; j++) {
        	if(matrix.m[i][j] == 0){
        		zero_poi[0] = i; 
				zero_poi[1]=j;
			
				zero_poi_row[0] = i - 1;
			    zero_poi_row[1] = i ;
			    zero_poi_row[2] = i + 1 >= MAX? -1:i+1;
			    zero_poi_row[3] = i;
			    
			    zero_poi_col[0] = j;
			    zero_poi_col[1] = j + 1 >=MAX? -1:j+1 ;
			    zero_poi_col[2] = j;
			    zero_poi_col[3] = j - 1;

				break;
			}	
		}
    } 
    
}

arr2d clone_matrix(int matrix[MAX][MAX]) 
{ 
    arr2d arr; 
	for (int i = 0; i < MAX; i++) 
    { 
        for (int j = 0; j < MAX; j++) {
        	arr.m[i][j] = matrix[i][j] ;
		}
    } 
    return arr; 
} 

int compute_cost(arr2d matrix, int cost){
	for (int i = 0; i < MAX; i++) 
    { 
        for (int j = 0; j < MAX; j++) {
        	if( matrix.m[i][j]!=0 && arr_goal[i][j] != matrix.m[i][j] ){
        		cost = cost + 1;
			}
		}
    }
    return cost;
}



int compareArray(int arr1[],int arr2[], int lengthArr){
	int num = 0;
	for(int i = 0;i<lengthArr;i++){
		if(arr1[i]  == arr2[i]){
			num = num + 1;
		}
	}
	return num;
}

void find_live_node(arr2d matrix , int path  ){
	find_zero_poi(matrix);
	int similarity = compareArray(zero_poi,zero_poi_old, 2);
	if(similarity < 2){
		for(int i = 0;i<2;i++){
			zero_poi_old[i] = zero_poi[i];
		}
		int min = MAX * MAX + 1;
		int cost = 0;
		arr2d matrix_least = matrix;
		for (int p = 0; p < 4; p++) 
	    {       
	        arr2d matrix_clone = matrix;
	        matrix_clone.m[zero_poi[0] ][zero_poi[1] ]  = matrix.m[zero_poi_row[p]][zero_poi_col[p]];
	        matrix_clone.m[zero_poi_row[p]][zero_poi_col[p]] = 0;
			cost = path + compute_cost(matrix_clone, 0);
			if(min > cost){
				min = cost;
				matrix_least = matrix_clone;
			}
	    } 	
	    printMatrix(matrix_least);
		printf("----------- \n");	
	    if(cost == path){
	    	printf("best results !!! \n");
		}else{
			find_live_node(matrix_least ,path + 1  );
		}
    }else{
		printf("----------- \n no result \n");	
	}
}



int main(){
	arr2d arr_root_clone = clone_matrix(arr_root); 
	printf("start \n");	
	printMatrix(arr_root_clone);
	printf("----------- \n");	
	
	
	find_live_node(arr_root_clone , 1);
	return 0;
}
