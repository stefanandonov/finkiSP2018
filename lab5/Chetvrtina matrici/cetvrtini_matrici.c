#include<stdio.h>

int main () {
    
    int matrica[100][100],i,j,m,n,maks1,min1,maks2,min2,maks3,min3,maks4,min4;
    int first1=1, first2=1, first3=1, first4=1;
    
    scanf("%d %d", &m, &n);
    
    if (m%2!=0 || n%2!=0){
        printf("MATRICATA NE E KOMPATIBILNA");
        return 0;
    }
    
    
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            scanf("%d", &matrica[i][j]);
        }
    }
    
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            if (i<m/2&&j<n/2){
                if (first1) {
                    maks1=min1=matrica[i][j];
                    first1=0;
                }
                if (matrica[i][j]>maks1)
                    maks1=matrica[i][j];
                if (matrica[i][j]<min1) 
                    min1=matrica[i][j];
            }
            if (j>=n/2&&i<m/2) {
                if (first2) {
                    maks2=min2=matrica[i][j];
                    first2=0;
                }
                if (matrica[i][j]>maks2)
                    maks2=matrica[i][j];
                if (matrica[i][j]<min2) 
                    min2=matrica[i][j];
            }
            if (i>=m/2 && j<n/2) {
                if (first3) {
                    maks3=min3=matrica[i][j];
                    first3=0;
                }
                if (matrica[i][j]>maks3)
                    maks3=matrica[i][j];
                if (matrica[i][j]<min3) 
                    min3=matrica[i][j];
            }
            if (i>=m/2 && j>=n/2) {
                if (first4) {
                    maks4=min4=matrica[i][j];
                    first4=0;
                }
                if (matrica[i][j]>maks4)
                    maks4=matrica[i][j];
                if (matrica[i][j]<min4) 
                    min4=matrica[i][j];
            }
        }
        
        
    }
    
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++){
            if (i<m/2 && j<n/2){
                matrica[i][j]=maks1-min1;
            }
            if (j>=n/2 && i<m/2) {
               matrica[i][j]=maks2-min2;
            }
            if (i>=m/2 && j<n/2) {
                matrica[i][j]=maks3-min3;
            }
            if (i>=m/2 && j>=n/2) {
               matrica[i][j]=maks4-min4;
            }
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
        
        
    }
    
    

    return 0;
}