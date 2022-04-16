#include <iostream>
using namespace std;


int fibonacciBU(int X){
	if( X <= 2 ) cout << "YES";
	else{
		int f1 = 1;
		int f2 = 1;
		int fn = 2;
		
		int flag = 0;
		
		while(fn < X){
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			if(fn == X){
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout << "NO";
		else  cout << "YES";
	}
}

int main(){
	int X = 22;
	fibonacciBU(X);
	return 0;
}
