#include <iostream>
using namespace std;

int A[] = {100,9,4,7,6,12,11,22,4};
int n = sizeof A/ sizeof(int);

int timMax(int i, int max){
	if(i == n) return max;
	
	if(A[i] > max) 
		max = A[i];
	timMax(++i,max);	
}

int main(){
	cout << timMax(1,A[0]);
	return 0;
}
