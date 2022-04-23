#include <iostream>
using namespace std;

int giaiThua(int n){
	if(n == 0) return 1;
	return n*giaiThua(n-1);
} 

int main(){
	cout << giaiThua(4);
	
	return 0;
}
