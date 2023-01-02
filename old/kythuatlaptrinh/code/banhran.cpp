#include<iostream>

using namespace std;
int main() {
	int n, cook, times, left, s;
	cin>>n>>cook;
	
	left = n % cook;
	times = n / cook;	
	if( n < cook ){
		cout << 10;
		return 0;
	}	
	s = times * 10;
	if(left != 0) {
		if(left <= cook/2) s += 5;
		else s += 10;
	}
	cout<<s;
	return 0;
}
    
