#include <bits/stdc++.h>

using namespace std;
#define ll long long

void TAHO(int n,int m){
	ll k = min(min(n,m),(m+n)/3);
   	cout << k << endl;
   	for(int i =0;i<k;i++){
   		if(n < m ){
   			cout << 1 << " " << 2;	
   			n -= 1;
   			m -=2;
		}
   		else{
   			cout << 2 << " " << 1;	
   			n-=2;
   			m-=1;
		}
   		cout << endl;
	}
}

int main()
{
    ll n,m;
    cin>>n>>m;
   	TAHO(n,m);
    return 0;
}
    
