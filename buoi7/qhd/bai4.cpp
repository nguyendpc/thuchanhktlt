#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],b[1000],f[1000],Max = 0;

int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	f[0] = b[0];
	for (int i = 1; i < n; i++)
	{
		f[i] = b[i];
		for (int j = 0; j < i; j++) 
		{
			if (a[i] - a[j] < k) break;
			if (f[j] + b[i] > f[i]) f[i] = f[j] + b[i];
		}
		Max = max(f[i], Max);
	}
	cout << Max;
}
   
