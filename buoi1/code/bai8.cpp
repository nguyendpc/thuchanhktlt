#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,k,i;cin>>n>>k;
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		if(i<=k+1) 
			a[i]=i+1;
		else 
			a[i]=(a[i-1]+a[i-k-1])%1000000;
	}
	cout<<a[n];
}
    
