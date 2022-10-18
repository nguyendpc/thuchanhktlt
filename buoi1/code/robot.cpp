#include <iostream>
using namespace std;


int demSoBuoc(int N){
	int DN[N];
	DN[0] = 0;
	DN[1] = 1;
	DN[2] = 2;
	if(N <=2 ) return DN[N];
	
	for(int i = 3 ; i <= N; i++){
		DN[i] = DN[i-1] + DN[i-2];
	}
	return DN[N];
	
}


int demSoBuoc2(int N){
	if(N <= 2 ) return N;
	
	return demSoBuoc2(N-1) + demSoBuoc2(N-2);
	
}

int main(){
	cout << demSoBuoc(5) << endl;
	cout << demSoBuoc2(5);
	return 0;
}

