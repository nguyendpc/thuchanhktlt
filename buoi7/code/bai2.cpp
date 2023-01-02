#include<bits/stdc++.h>
#define N 1000000
using namespace std;
int a[N];
int b[N];
int f[N] ={0};
int n;

int DayConTangDaiNhat(){
	int len = 1;
	for (int i=1; i<=n; i++) {
	    for (int j=0; j<i; j++) 
		{
			if (a[j] < a[i]) 
			{
		        f[i] = max(f[i], f[j] + 1);
		    }
		}
	    len = max(len, f[i]); 
	}
	return len;
}

int main ()
{
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int maxLen = DayConTangDaiNhat();
    cout << maxLen << endl;
    
    return 0;
}
    
