#include<stdio.h>

int zbir (int a, int b) {
    if (a+1==b || a==b)
        return 0;
    else
        return a+1+zbir(a+1,b);
}

int main () {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", zbir(a,b));
    return 0;
}