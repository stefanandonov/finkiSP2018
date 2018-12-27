#include<stdio.h>

int rastecki (int broj) {
    if (broj<10)
        return 1;
    /*if (broj<100) {
        return broj%10 < broj/10;
    }*/
    else {
        int cifra2 = broj%10;
        int cifra1 = broj/10%10;
        if (cifra2 > cifra1)
            return rastecki (broj/10);
        else
            return 0;
    }
        
}

int main () {
    int N;
    
    scanf("%d", &N);
    
    for (int i=0;i<N;i++){
        int broj;
        scanf ("%d", &broj);
        printf(rastecki(broj)?"DA\n":"NE\n");
    }
        
    
    //printf("%d", rastecki(120));
    return 0;
}