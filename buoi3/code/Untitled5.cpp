#include <bits/stdc++.h>
using namespace std;
long long a[200],b[1000],f[1000],i,n,k,j,m;
int main()
{
    cin>>n>>k;
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<=n;i++)
    {
        cin>>j;
        b[a[i]]=j; m=max(m,a[i]);
    }

    for (i=1;i<=k;i++) f[i]=max(b[i],f[i-1]);
    
    for (i=k+1;i<=m;i++)
    {
        f[i]=max(f[i-1], f[i-k]+b[i]);
    }
    cout<<f[m];
}
    
