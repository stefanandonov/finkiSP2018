#include<stdio.h>

int sum_array (int array [] , int start ,int end){
    int sum=0;
    for (int i=start;i<end;i++)
        sum+=array[i];
    
    return sum;
}

int max_subset (int array [], int M, int N, int start, int max) {
    if (start + N == M){
        if (sum_array(array,start,M) > max)
            return sum_array(array,start,M);
        else
            return  max;
    }
    else {
        int curr_max = sum_array(array,start,start+N);
        if (curr_max>max) {
            max = curr_max;
        }
        return max_subset(array,M,N,start+1,max);
    }
}

int main () {
    
    int M,N,niza[100],i;
    
    scanf("%d %d", &M,&N);
    for (i=0;i<M;i++){
        scanf("%d", &niza[i]);
        //printf("%d", niza[i]);
    }
    
    printf("%d", max_subset(niza,M,N,0,-10000));
    
    return 0;
} 