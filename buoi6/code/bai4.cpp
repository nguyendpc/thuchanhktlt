// KIVU
#include<bits/stdc++.h> 
using namespace std;
#define MAX 100000
int A[MAX];
int B[MAX];
int n,m;

int KIVU(){
	int dem = 0;
	int i = 0;
	int j = 0;
	while( i < n && j < m ){
		if(A[i] > B[j] ){
			dem += 1;
			i++;
		}
		j++;
	}
	return dem;
}

int main(){
	cin >> n >> m;
	for(int i = 0 ;i < n;i++) cin >> A[i];
	for(int i = 0 ;i < m;i++) cin >> B[i];
	sort(A, A+n, greater<int>());
	sort(B, B+m, greater<int>());
	cout << KIVU();
	return 0;
}
