#include <iostream>
using namespace std;


void fibonacciBU(int N){
	int f1 = 1;
	int f2 = 1;
	int fn;
	
	
	for(int i=1;i <= N ;i++){
		if(i <= 2) cout <<1 << "\t";
		else{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			cout << fn << "\t";
		}
		
	}
}


int main(){
	
	fibonacciBU(6);
	return 0;
}
