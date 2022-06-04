#include <bits/stdc++.h>
using namespace std;
int a[101];
int main() {
    int n, d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        if (d <= a[i])
            d++;
    cout<<d;
}
