#include<stdio.h>
int deliteli (int broj, int delitel) {
    
    if (delitel==1)
        return 1;
    else {
        if (broj%delitel==0)
            return delitel+deliteli(broj,delitel-1);
        else
            return deliteli(broj,delitel-1);
    }
        
}

int main () {
    int x;
    
    scanf("%d", &x);
    printf("%d", deliteli(x,x-1));
}