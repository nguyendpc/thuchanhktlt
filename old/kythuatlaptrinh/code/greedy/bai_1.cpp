#include <stdio.h>
int n,m;


void bubbleSort_descending(int array[], int length) {
	for(int i = 0 ; i < length - 1; i++){
		for(int j = 0; j < length - 1 - i ; j++){
			if (array[j] < array[j+1]) {
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

void printArray(int arr[], int length){
	for(int i = 0 ;i< length;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int greedy(int arr[], int length,int m){
	int num = 0;
	int count = 0;
	for(int i = 0; i < length; i++){
		num = num + arr[i];
		++count;
		if(num >= m) return count;
		printf("%d \n",num);
		--num;
	}
	return 0;
}

int main(){
	scanf("%d %d", &n,&m);
	int array[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&array[i]);
	}
	bubbleSort_descending(array,n);
	printArray(array,n);
	int count = greedy(array,n,m);
	if(count == 0 ){
		printf("-1");
	}else{
		printf("%d",count);
	}
}
