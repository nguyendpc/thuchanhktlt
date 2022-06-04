#include <bits/stdc++.h>
using namespace std;
long int a[10000], n, L[10000];
vector <long int> c;
void inp()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}
void qhd()
{
    L[1] = 1;
    int lmax ;
    for(int i = 2;i <= n; i++)
    {
    	lmax = 0;
    	for(int j = 1; j < i; j++)
    	{
    		if(a[i] > a[j])
    		{
    			if(L[j] > lmax)
    			{
    				lmax = L[j];
				}
			}
		}
		L[i] = lmax + 1;
	}
}
int findmax()
{
	int MAX = L[1], res = 1;
	for(int i = 2; i <= n; i++)
	{
		if(L[i] > MAX)
		{
			MAX = L[i];
			res = i;
		}
	}
	return res;
}
void truyvet()
{
	int i = findmax();
	int j = i - 1;
	c.push_back(a[i]);
	while(j > 0)
	{
		if(L[i] == L[j] + 1)
		{
			c.push_back(a[j]);
			i = j;
		}
		j--;
	}
}
int main()
{
    inp();
    qhd();
    truyvet();
    int i = findmax();
    cout << L[i] << "\n";
    for(int i = c.size() - 1; i >= 0; i--)
        cout << c[i] << " ";
}
    
