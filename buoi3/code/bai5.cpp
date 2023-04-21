#include <iostream>
using namespace std;

int arr[] = { 1,6,3,4,7,9 }; 
int n = sizeof(arr) / sizeof(int); 

int timDiemCoDinh(int l,int r){
	int mid = (l+r)/2;
	if(l<r) return -1;
	if( arr[mid] == mid ) return mid;
	if( arr[mid]  > mid ) return  timDiemCoDinh(l, mid-1);
	if( arr[mid]  < mid ) return  timDiemCoDinh( mid+1 ,r);
}

int main(){
	cout << timDiemCoDinh(0,n-1);
	return 0;
}
