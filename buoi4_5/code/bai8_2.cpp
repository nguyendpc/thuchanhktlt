#include <iostream>

using namespace std;
int n, cnt = 0, e, ans = 1, m = 0;

void btr(int i, int s1, int s2, string s){
	if (i == n ){
		if (s1 == s2) 
			cout << s << endl, m++;
		cnt ++;
	}
	if (s2 > s1) return;
	if (i < n && cnt < e){
		btr(i + 1, s1 + 1, s2, s + '(');
		btr(i + 1, s1, s2 + 1, s + ')');
	}
}
long ms(long a, long b){
	if (b == 0) return 1;
	if (b == 1) return a;
	ans = ms(a, b/2);
	ans*=ans;
	if (b%2 == 1) ans*=2;
	return ans;
}
int main(){
	cin >> n ;
	e = ms(2, n) / 2;
	btr(0, 0, 0, "");
	cout << m;
}
    
