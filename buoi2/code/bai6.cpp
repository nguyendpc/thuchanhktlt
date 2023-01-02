#include <iostream>
using namespace std;
int A[3][3] = {
	1,2,8,
	4,5,6,
	7,8,9
};
void yenNgua()
{
	for(int i = 0;i < 3; i++){// do tung dong cua ma tran
		// tìm cot j lon nhat tren dong i
		int cotj = 0;
		int maxDong = A[i][0]; // gan phan tu dau tien cua dong i lam gia tri lon nhat
		for(int j = 0; j < 3; j++){// do tung phan tu cua dong
			if(A[i][j] > maxDong){
				maxDong = A[i][j];
				cotj = j;
			}
		}
		// kiem tra A[i][cotj] co nho nhat tren cot cot khong
		int dongj = 0;
		int minCot = A[i][cotj]; // gan phan tu dau tien cua cotj lam gia tri lon nhat
		for(int k = 0; k < 3; k ++){// do tung phan tu cua cot
			if( k!= cotj && A[k][cotj] <  minCot){
				dongj = k;
				break;
			}
		}
		if(dongj == i ) cout<< A[dongj][cotj];
	}
}

int main(){
	yenNgua();
	return 0;
}
