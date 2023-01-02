// only for sort number
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

void counting_sort(int arr[], int len,int num_max){
	int i;
	int arr_count[10] = {};
	for(i = 0;i<len;i++){
		++arr_count[(arr[i]/num_max)%10];
	}
	
	for(i=1;i<10;i++){
		arr_count[i] = arr_count[i] + arr_count[i-1];
	}
	
	int places[len] = {};
	for(i = len - 1 ; i >=0 ; i--){
		places[ arr_count[(arr[i]/num_max)%10] ] = arr[i];
		--arr_count[(arr[i]/num_max)%10];
	}
	for(i = 0 ; i < len ; i++){
		arr[i] = places[i+1];
	}
}

void radix_sort(int arr[], int len){
	int num_max = find_max(arr, len); 
    for (int i = 1; num_max/i > 0; i *= 10) 
    {
    	counting_sort(arr, len, i); 
	}
}

int main(){
	int arr[] = {170, 45, 75, 90, 802, 24, 2, 66}; 
	int n = sizeof(arr)/sizeof(int);

	radix_sort(arr,n);
	printArray(arr,n);
}
