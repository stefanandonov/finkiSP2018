#include<stdio.h>

int isPrime (int number) {
    int i;
    for (int i=2;i<number;i++)
        if (number%i==0)
        	return 0;
    return 1;
        
}

int containsEvenDigit (int number) {
    while (number){
        int digit = number%10;
        if (number%2==0)
            return 1;
        number/=10;
    }
    
    return 0;
}

int main() {
    int M,N,i;
    int sum = 0;
    int counter = 0;
    scanf("%d %d", &M, &N);
    
    for (i=M+1;i<N;i++) {
        if (isPrime(i)&&containsEvenDigit(i)){
            printf("%d\n", i);
            sum+=i;
            counter++;
            
        }
       
    }
    
    if (counter){
        printf("%.3f", (double) sum / counter );
    }
    else {
        printf("NEMA");
    }

    return 0;
}