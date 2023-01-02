#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin>>n;
    int a=0;
    while(n!=0)
    {
        a+=n%10;
        n/=10;
    }
    if(a%10==9) cout<<"YES"; else cout<<"NO";
}
