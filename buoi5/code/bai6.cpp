#include <iostream>
using namespace std;

int arr[] = { 10,2,5,3,6 }; 
int n = sizeof(arr) / sizeof(int); 

int min(int a, int b){
	if(a < b) return a;
	return b;
}

int timMin(int i){
	if( i == 0 ) return arr[0];
	if( i == 1 ) return min(arr[0],arr[1]);
	
	return min(arr[i],timMin(i-1) );
}

int main(){
	cout << timMin(n);
	return 0;
}
