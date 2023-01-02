#include <stdio.h>

void print_arr(int arr[], int len){
	for(int i = len ;i >= 0;i--){
		printf("%d ",arr[i] );
	}
	printf("\n");
}

void luythua(int a, int b){
	int arr[10];

	int ind = 0;
	int loop = 0;
	
	for(int  i =1; a/i > 0 ;i*=10){
		ind = loop;
		int mod=0;
		for(int  j =1; a/j > 0 ;j*=10){
			int mul = ((a/i)%10) * ((a/j)%10) + mod;
			
			arr[ind] += mul%10 ;
			printf("asdas %d s %d  s %d \n",mul,mul%10 ,mul/10);
			mod = mul/10;
			
			++ind;
		}
		arr[ind] = mod;
		++loop;
		print_arr(arr, ind );
	}

}

int main(){
	int a,b;
//	scanf("&d &d",a,b);
	a= 19;b=19;
	luythua(a,b);
	printf("\n %d asd",19*19);
}
