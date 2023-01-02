#include<bits/stdc++.h> 
#define MAX 1000000

int n = 6;
int mang[MAX];

int main(){
	mang[0] = 1;
	mang[1] = 1;
	printf("%d ", mang[0]);
	printf("%d ", mang[1]);
	for(int i = 2; i < n ; i++){
		mang[i] = mang[i - 1] + mang[i-2];
		printf("%d ", mang[i]);
	}
}
