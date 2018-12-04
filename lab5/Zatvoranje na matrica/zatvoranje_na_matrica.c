#include<stdio.h>

int main() {
	int matrica[100][100],novaMatrica[100][100],i,j,m,n,sosedi=0,edinici=0;
	
	scanf("%d %d", &m, &n);
	
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d", &matrica[i][j]);
	
	for (i=0;i<m;i++){		
		for (j=0;j<n;j++){
			if (matrica[i][j]==0){
				sosedi = 0;
				edinici = 0;
				//gore
				if (i>=1) {
					sosedi++;
					if (matrica[i-1][j]==1)
						edinici++;
				}
				//dole
				
				if (i<m-1) {
					sosedi++;
					if (matrica[i+1][j]==1)
						edinici++;
				}
				
				
				//levo
				
				if (j>=1) {
					sosedi++;
					if (matrica[i][j-1]==1)
						edinici++;
				}
				
				//desno
				
				if (j<n-1) {
					sosedi++;
					if (matrica[i][j+1]==1)
						edinici++;
				}
				
				//levo-gore
				
				if (i>=1&&j>=1){
					sosedi++;
					if (matrica[i-1][j-1]==1)
						edinici++;
				}
				
				//desno-gore
				
				if (j<n-1&&i>=1) {
					sosedi++;
					if (matrica[i-1][j+1]==1)
						edinici++;
				}
				
				//levo-dole
				
				if (j>=1&&i<m-1){
					sosedi++;
					if (matrica[i+1][j-1]==1)
						edinici++;
				}
				
				
				//desno-dole
				if (j<n-1 && i<m-1){
					sosedi++;
					if (matrica[i+1][j+1]==1)
						edinici++;
				}
				
				float procent = (float)edinici/sosedi;
                //printf("%d %d: edinici: %d sosedi: %d procent: %.2f\n", i, j, edinici, sosedi, procent);
				if (procent>0.5)
					matrica[i][j]=1;
				else
					matrica[i][j]=0;
				
			
            }}
			
	}
	
	for (i=0;i<m;i++){		
		for (j=0;j<n;j++){
			printf("%d ", matrica[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}