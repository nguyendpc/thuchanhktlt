#include <stdio.h>

void printArray(int arr[], int len){
	for(int i = 0 ;i< len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubble_sort(int arr[], int len){
	int i,j;
	for(i = 0 ; i < len - 1; i++){
		for(j = 0; j < len - 1 - i ; j++){
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int arr[] = {4,3,1,2};
	int n = sizeof(arr)/sizeof(int);
	bubble_sort(arr,n);
	printArray(arr,n);
}
