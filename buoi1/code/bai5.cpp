#include <bits/stdc++.h>

using namespace std;
int n, sum=0;
int main()
{
    cin >> n;
    for(int i=1; i<n; i++)
        if(n%i==0)
            sum=sum+i;
    if(n==sum)
        cout << "YES";
    else
        cout <<"NO";
    return 0;
}
