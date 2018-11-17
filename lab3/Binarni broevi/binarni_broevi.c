#include<stdio.h>
#include<math.h>

int main() {
    
    int M,N,bNumber,dNumber,i,j,dMax=0, bMax=0;
    
    scanf ("%d %d", &N, &M);
    
    for (i=0;i<N;i++) {
        scanf("%d", &bNumber);
        j=0;
        dNumber=0;
        int temp = bNumber;
        while (temp){
            int digit = temp%10;
            dNumber+=digit * pow(2,j);
            j++;
            temp/=10;
        }
        
        
        //printf("%d %d\n", bNumber, dNumber);
        
        if (dNumber>M)
        	printf("%d %d\n", bNumber, dNumber);
        
        if (dNumber>dMax){
            dMax=dNumber;
            bMax=bNumber;
        }
        
        	
       
    }
    
    printf ("Max: %d %d", bMax, dMax);
    
    return 0;
}