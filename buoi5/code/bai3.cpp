#include <iostream>
using namespace std;

int arr[] = { 10,1,5,4,7,1,2,6,4,7,8,4 }; 
int n = sizeof(arr) / sizeof(int); 
int x = 1;

int count_x(int left, int right){
	if(left == right && arr[left]  == x){
		return 1;
	}
	if(left == right && arr[left]  != x){
		return 0;
	}
	if( left > right ){
		return 0;
	}
	return count_x(left, (left+right)/2 ) + count_x(1 + (left+right)/2 ,right);
}

int main(){
	int count = count_x(0,n -1);
	cout << count;
}
