#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, v, t, d;
    cin >> a >> b >> v;
    t = a;
    d = 1;
    while(t < v)
    {
        t = t - b + a;
        d++;
    }
    cout << d;
    return 0;
}
