#include <stdio.h>

void printArray(int arr[], int len){
	for(int i = 0 ;i< len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int find_max(int arr[], int len){
	int max = arr[0];
	for(int i = 1; i < len;i++){
		if(max < arr[i] ){
			max = arr[i];
		}
	}
	return max;
}

void counting_sort(int arr[], int len){
	int i;
	int num_max = find_max(arr,len) + 1;

	int arr_count[num_max] = {};
	
	for(i = 0;i<len;i++){
		++arr_count[arr[i]];
	}
	
	for(i=1;i<num_max;i++){
		arr_count[i] = arr_count[i] + arr_count[i-1];
	}
	
	int places[len] = {};
	for(i = 0 ; i < len ; i++){
		places[ arr_count[arr[i]] ] = arr[i];
		--arr_count[arr[i]];
	}
	for(i = 0 ; i < len ; i++){
		arr[i] = places[i+1];
	}
}

int main(){
	int arr[] = {4,3,1,2,0,8,5,7,9,6};
	int n = sizeof(arr)/sizeof(int);
	counting_sort(arr,n);
	printArray(arr,n);
}
