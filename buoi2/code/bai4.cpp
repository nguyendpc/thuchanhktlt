#include <bits/stdc++.h>

using namespace std;

long long x, n;

long long luythua(long long i)
{
    if(i == 0) return 1;
    long long t = luythua(i / 2);
    long long re = (t * t) % 10000;
    if(i % 2 == 1) re *= x;
    return re % 10000;
}

int main()
{
    cin >> x >> n;
    cout << luythua(n)
    return 0;
}
