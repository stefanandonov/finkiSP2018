#include<stdio.h>
int main() {
    int matrica[100][100], sumi[100], i,j,n,dijagonali;
    
    scanf("%d",&n);
    
    dijagonali = n*n-1;
    
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        	scanf("%d", &matrica[i][j]);
    
        
    for (i=0;i<dijagonali;i++)
        sumi[i]=0;
        
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            sumi[j-i+n-1]+=matrica[i][j];
        }
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
        	matrica[i][j]=sumi[j-i+n-1];
            printf("%d ", matrica[i][j]);
    }
        printf("\n");
    }
    
 
    return 0;
}