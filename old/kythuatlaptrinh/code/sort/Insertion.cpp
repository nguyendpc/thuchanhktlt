#include <stdio.h>

void printArray(int arr[], int len){
	for(int i = 0 ;i< len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void insertion_sort(int arr[], int len){
	int i,j,temp;
	for(i = 1 ; i < len; i++){
		temp = arr[i];
		for(j = i - 1; j>=0; j--){
			if( temp > arr[j] ){
				break;
			}else{
				arr[j + 1] = arr[j];
			}
		}
		arr[j + 1] = temp;
		
	}
}

int main(){
	int arr[] = {4,3,1,2,0,8,5,7,9,6};
	int n = sizeof(arr)/sizeof(int);
	insertion_sort(arr,n);
	printArray(arr,n);
}
