#include <iostream>
using namespace std;

int arr[] = { 0,0,0,0,0}; 
int n = sizeof(arr) / sizeof(arr[0]); 

int count_zero(int l, int r){
	int mid = (l+r)/2;
	
	if(l > r && r > 0) return n;
	if(l > r && r < 0) return 0;
	
	if( arr[mid] == 0 && arr[mid -1 ] ) return mid;
	if( arr[mid] == 0 ) return count_zero(0,mid-1);
	if( arr[mid] == 1 ) return count_zero(mid + 1,r);
}

int main(){
	cout << n - count_zero(0,n-1);
	return 0;
}
