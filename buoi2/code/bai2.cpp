#include <bits/stdc++.h>
using namespace std;
long long n,t=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        t*=i;
    }
    cout<<t;
    return 0;
}
