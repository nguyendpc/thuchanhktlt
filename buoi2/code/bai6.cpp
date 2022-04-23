#include <iostream>
using namespace std;
int A[3][3] = {
	1,2,8,
	4,5,6,
	7,8,9
};
void yenNgua()
{
	for(int i = 0;i < 3; i++){
		// tìm cot j lon nhat tren dong i
		int cot = 0;
		int maxDong = A[i][0];
		for(int j = 0; j < 3; j++){
			if(A[i][j] > maxDong){
				maxDong = A[i][j];
				cot = j;
			}
		}
		// kiem tra A[i][cot] co nho nhat tren cot cot khong
		int minCot = A[0][cot];
		int dong = 0;
		for(int k = 0; k < 3; k ++){
			if( A[k][cot] < minCot ){
				dong = k;
				break;
			}
		}
		if(dong == i ) cout<< A[dong][cot];
	}
}

int main(){
	yenNgua();
	return 0;
}
