#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int i = 0;

void print_arr(int arr[],int len){
	for( int i = 0;i<len;i++ ){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int get_random(int L, int R){
	int n = ( rand() % (R - L + 1) ) + L; 
	
	return n;
}

int permutation( int arr[], int L, int R  ){
	if(L > R) return 0;
	int n = get_random(L,R);

	arr[i] = n;
	i++ ;
	permutation(arr, L, n-1);
	permutation(arr, n+1, R);
}

int main(){
	int L = 5, R = 10;
	srand(time(0)); 
	int arr[R - L + 1];
	
	permutation(arr,L,R);
	print_arr(arr,R - L + 1);
}

