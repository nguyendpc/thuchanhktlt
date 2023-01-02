#include <stdio.h>

void printArray(int arr[], int len){
	for(int i = 0 ;i< len;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void shell_sort(int arr[], int len){
	int i,j,gap,temp;
	for(gap=len/2;gap>0;gap/=2){
		for(i = gap;i<len;i++){
			temp = arr[i];
			j = i;
			while(j>=gap && temp < arr[j - gap]){
				arr[j] = arr[j - gap];
				j-=gap;
			}
			arr[j] = temp;
		}
	}
}

int main(){
	int arr[] = {4,3,1,2,0,8,5,7,9,6};
	int n = sizeof(arr)/sizeof(int);
	shell_sort(arr,n);
	printArray(arr,n);
}
