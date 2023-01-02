// hieu so
#include<bits/stdc++.h> 
#define MAX 1000000
int n;
long  matrix[MAX];
int max_chain = 0;
int min_poi;


void find_max_chain(){
	for(int i = 1;i < n; i++){
		if( matrix[i] >  min_poi){
			int new_divide = matrix[i] - min_poi;
			if(max_chain < new_divide){
				max_chain = new_divide;
			}
		}	
		if( matrix[i] <  min_poi){
			min_poi = matrix[i];
		}
	}
}

int main(){
	
	scanf("%d",&n);
	for(int i = 0;i < n; i++){
		scanf("%d",&matrix[i]);
	}
	
	min_poi = matrix[0];
	
	find_max_chain();
	printf("%d ", max_chain );
}
