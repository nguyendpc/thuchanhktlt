#include <stdio.h>

int findX( int arr[] , int n, int X){
	if(n == 0)return -1;
	if( X ==  arr[n]){
		return n;
	}
	if(X < arr[n] ){
		findX(arr, n - n/2, X  );
	}else{
		findX(arr,n + n/2 ,X );
	}
}

int main(){
	int arr[] = {1,5,7,9,12,34,56,123};
	int n = sizeof(arr)/sizeof(int);
	int X = 7;
	int ind_X = findX(arr,n/2,X);
	printf("%d", ind_X );
}
