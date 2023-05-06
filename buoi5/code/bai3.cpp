// THIDAU
#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],b[1000],f[1000];

int thiDau(int n,int k,int a[], int b[]){
	int Max = 0;
	// a = 1 2 3 4 5
	// b = 1 5 1 5 1
	// f = 1 5 2 10 0
	f[0] = b[0];
	for (int i = 1; i < n; i++)
	{
		f[i] = b[i]; 
		for (int j = 0; j < i; j++) 
		{
			// a[1] - a[0] = 1
			if (a[i] - a[j] < k) 
				break;
			if (f[j] + b[i] > f[i]) 
				f[i] = f[j] + b[i];
		}
		if(Max < f[i]) Max = f[i];
	}
	return Max;
}

int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	
	cout << thiDau(n,k,a,b);
	return 0;
}
   
