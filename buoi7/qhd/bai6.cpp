#include <bits/stdc++.h>
using namespace std;
int const pt=1e6+1;
int f[pt]={};
int main()
{
    int n,k; cin>>n>>k;
    f[1]=2;
    for (int i=2; i<=n; i++)
    {
        if (i<=k+1) f[i]=f[i-1] +1;
        else f[i]=f[i-1]+f[i-k-1];
    }
    cout<<f[n];
    return 0;
}
