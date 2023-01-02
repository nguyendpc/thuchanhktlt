#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 6;
	int a[n] = {4,3,1,3,6,7};
 
    sort(a, a+n); // sap xep mang a tang dan tu 0 den n-1
    sort(a+1, a+1+n); // sap xep mang a tang dan tu 1 den n
    sort(a, a+n, greater<int>()); // sap xep mang a giam dan tu phan tu n-1 den 0
    for(int i = 0 ;i<n;i++) cout << a[i] << " ";
    
    int aa = 1;
    int bb = 2;
    cout << endl<< min(aa,bb) << " " << max(aa,bb);
}
