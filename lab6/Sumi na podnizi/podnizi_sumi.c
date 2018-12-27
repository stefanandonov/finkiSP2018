#include<stdio.h>

int max (int a [], int length) {
    if (length==2){
        if (a[0]>=a[1])
            return a[0];
        else
            return a[1];
    }
    else {
        int max_before = max(a,length-1);
        if (a[length-1]>=max_before)
            return a[length-1];
        else
            return max_before;
    }
        
}
int main () {
    int n, niza[100];
    
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%d", &niza[i]);
    
    printf("%d", max(niza,n));
    return 0;
}