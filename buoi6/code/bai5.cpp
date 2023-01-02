#include <bits/stdc++.h>
using namespace std;
const int N=101;
int a[N],b[N],c[N];
int vt=0,n;
int tienXang = 0;

int DOXA(){
	int min = b[0];
	for (int i=1;i<=n+1;i++)
    {
    	if(min > b[i]) min = b[i];
        
        if (min * a[i] < b[i]*a[i])
            tienXang = tienXang + min*a[i];
        else
            tienXang = tienXang + b[i]*a[i];  
    }
    return tienXang;
}

int main()
{
    cin>>n;
    for (int i=1;i<=n-1;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
        cin>>b[i];
    
    cout<< DOXA();
    return 0;
}
