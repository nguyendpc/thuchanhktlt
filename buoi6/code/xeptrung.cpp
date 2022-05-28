#include <bits/stdc++.h>
#define ll long long
#define spd ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
ll a[1000050];
ll n,kq,m,x,y,g,dem;

bool tong(ll x,ll m)
{
    ll t=0,dem=0;
    for(int i=1;i<=n;i++)
    {
        t+=a[i];
        if(t>x)
        {
            dem++;
            t=a[i];
        }
    }
    dem++;
    return (dem<=m);
}
int main()
{
    spd;
    cin>>n>>m;
   	ll dem=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        dem+=a[i];
    }
 	ll x=0,y=dem,kq=0,g;
 	while(x<=y)
 	{
     	g=(x+y)/2;
     	if(tong(g,m))
     	{
         	kq=g;
         	y=g-1;
     	}
     	else
        	x=g+1;
 	}
 	cout<<kq;
}
