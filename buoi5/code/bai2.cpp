#include <iostream>
using namespace std;

int arr[] = {1,5,7,9,12,34,56,123};
int n = sizeof(arr)/sizeof(int);
int X = 9;
	
int findX(  int n, int X){
	if(n == 0)return -1;
	if( X ==  arr[n]){
		return n;
	}
	if(X < arr[n] ){
		findX( n - n/2, X  );
	}else{
		findX(n + n/2 ,X );
	}
}

int main(){
	int ind_X = findX(n/2,X);
	cout << ind_X + 1;
}
