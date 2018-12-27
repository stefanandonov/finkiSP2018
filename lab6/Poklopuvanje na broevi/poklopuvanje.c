#include<stdio.h>

float preklopuvanje (int m, int n, int preklopuvanja, int cifri) {
    if (m==0&&n==0)
        return (float)preklopuvanja/cifri*100.0;
   	
    else {
        if (m%10 == n%10&&m != 0&&n != 0)
            return preklopuvanje (m/10,n/10,preklopuvanja+1,cifri+1);
        else
            return preklopuvanje (m/10,n/10,preklopuvanja,cifri+1);
    }
}

int main () {
    
    int N, broj1, broj2;
    
    scanf("%d", &N);
    
    for (int i=0;i<N;i++) {
        scanf("%d %d", &broj1,&broj2);
        
        printf("%.2f%%\n", preklopuvanje(broj1,broj2,0,0));
    }
    
    //printf("%.2f%%", preklopuvanje(12345,12885,0,0));

    return 0;
}