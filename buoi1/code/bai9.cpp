#include <bits/stdc++.h>
using namespace std;

int soNguyenTo(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}

int soDoi(int x){
	int temp = x;
	int s = 0;
	while(temp > 0){
		s = s*10 + temp%10;
		temp=temp/10;
	}
	if(s == x) return 1;
	return 0;
}

int main(){
    int a, b;
    int s = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(soDoi(i) && soNguyenTo(i))
            s++;
    }
    cout << s;
    return 0;
}
    
