#include<algorithm>
#include <iostream>
using namespace std;

int main()
{
	int n = 6;
	int a[n] = {4,3,1,3,6,7};
    sort(a, a+n); 
    for(int i = 0 ;i<n;i++) cout << a[i] << " ";
}
