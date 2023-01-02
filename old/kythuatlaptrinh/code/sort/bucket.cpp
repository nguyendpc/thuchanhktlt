#include <stdio.h>
#define MAX 10000
struct buckets{
	float value[MAX];
	int key;
};

void printArray(float arr[], int len){
	for(int i = 0 ;i< len;i++){
		printf("%.2f ", arr[i]);
	}
	printf("\n");
}

float insertion_sort(float arr[], int len){
	int i,j;
	float temp;
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

void bucket_sort(float arr[], int len){
	int i,j;
	buckets arr_bucket[len] = {};

	// insert arr[i] to bucket[n*arr[i]]
	for(i = 0;i<len;i++){
		int idx = len*arr[i];
		int key = arr_bucket[idx].key;
		arr_bucket[idx].value[key] = arr[i];
		arr_bucket[idx].key = key + 1;
	}	
	for(i = 0;i<len;i++){
		int key = arr_bucket[i].key;
		if( key >0){
			insertion_sort( arr_bucket[i].value ,key);
		}	
	}
	int k = 0;
	for(i = 0;i<len;i++){
		int key = arr_bucket[i].key;
		if(key > 0){
			for(j = 0; j < key;j++){
				arr[k] = arr_bucket[i].value[j];
				++k;
			}
		}
	}
}

int main(){
	float arr[] = {0.78,0.17,0.39,0.26,0.72,0.94,0.21,0.12,0.23,0.68}; 
	int n = sizeof(arr)/sizeof(int);

	bucket_sort(arr,n);
	printArray(arr,n);
}
