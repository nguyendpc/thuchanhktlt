#include <iostream>
using namespace std;
int main(){
	int n,c,a=0,b=0;
	cin >> n;
	for (int i=0; i<n; ++i){
		cin >> c;
		if (c==1) a++;
		else b++; 
	}
	if (a>b) cout << a-b;
	else cout << b-a;
}
    
