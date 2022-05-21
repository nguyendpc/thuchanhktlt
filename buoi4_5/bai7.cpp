#include <stdio.h>
int n,m,x,y;
int count = 0;

int	matrix[1000][1000];
int chonnode[10000][2];		
		
int checkbannode( int x, int y){
	for(int i = 0; i < n*m; i++ ){
		if(chonnode[i][0] == x && chonnode[i][1] == y ){
			return 1;
		}
	}
	return 0;
}

int ocsenanrau(){
	// top right bot left
	int dong[4] = { x - 1, x , x + 1 , x };
	int cot[4] = { y , y + 1 , y , y - 1  };	
	for(int i = 0; i < 4; i++ ){
		if(dong[i] > -1 && cot[i] >-1 && dong[i] < n && cot [i] < m ){
			if( checkbannode( dong[i] , cot[i]) == 0 &&  matrix[ dong[i] ][ cot[i] ] == 0    ){
				x = dong[i];
				y = cot[i];
				chonnode[count][0] = x;
				chonnode[count][1] = y;
				++count;
				ocsenanrau();
			}
		}
		
	}
}

int main(){
	scanf("%d %d %d %d", &n,&m,&x,&y);
	--x;--y;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			scanf("%d",&matrix[i][j]);
		}
	}

	
	if(matrix[x][y] == 0){
		chonnode[count][0] = x;
		chonnode[count][1] = y;
		++count;
		ocsenanrau();
	}
	
	printf("%d \n", count );
	
	
}
    
