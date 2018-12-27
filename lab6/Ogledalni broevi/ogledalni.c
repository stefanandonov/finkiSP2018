#include<stdio.h>

void ogledalniPecatenje (int a[], int start, int end, int counter){
    if (start>=end){
        if (counter==0){
            printf("NEMA");
        }
        return ;
    }
        
    
    if (a[start]==a[end]){
        
        printf("%d ",a[start]);
        counter++;
        
    }
    ogledalniPecatenje(a,start+1,end-1, counter);
}

int main() {
    int N, size, i,j, niza[100];
    
    scanf("%d", &N);
    
    for (i=0;i<N;i++){
        scanf("%d", &size);
        
        for (j=0;j<size;j++){
            scanf("%d", &niza[j]);
        }
        
        
        ogledalniPecatenje(niza,0,size-1,0);
        printf("\n");
    }
        
    
    
    return 0;

}