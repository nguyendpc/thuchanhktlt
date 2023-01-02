#include<stdio.h>
#include<math.h>
int s(float n,float k){
	float kq = ceil(n*2/k)*5;
	return kq;
}
int main(){
    float n, k;
    scanf("%f",&n);
    scanf("%f",&k);
    if(k>=n)
    	printf("10");
    else 
		printf("%d",s(n,k));
	return 0;
}
