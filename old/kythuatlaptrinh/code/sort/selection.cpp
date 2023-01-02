#include <stdio.h>

void printArray(int arr[], int len){
	for(int i = 0 ;i< len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void selection_sort(int arr[], int len){
	int i,j,index,temp;
	for(i=0;i<len-1;i++){
		index = i;
		for(j = i+1 ; j < len; j++){
			if(arr[index] > arr[j] ){
				index = j;
			}	
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}

int main(){
	int arr[] = {4,3,1,2,0,8,5,7,9,6};
	int n = sizeof(arr)/sizeof(int);
	selection_sort(arr,n);
	printArray(arr,n);
}
