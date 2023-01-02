#include <iostream>
using namespace std;
int main(){
	int a,b,s=0;
	cin >> a >> b;
	for (int i=1; i<a; ++i) if (a%i==0) s+=i;
	if (s==b){
		s=0;
		for (int i=1; i<b; ++i) if (b%i==0) s+=i;
		if (s==a) cout << "YES";
		else cout << "NO";
	}
	else cout << "NO";
	return 0;
}
    
