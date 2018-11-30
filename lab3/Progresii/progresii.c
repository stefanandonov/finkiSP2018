#include<stdio.h>
int main() {
	
	int N,M,i,j,broj,first=1,second,prethoden,momentalen;
	int razlika, kolicnik;
	int aritmeticka=1, geometriska=1;
	scanf("%d", &N);
	
	for (i=0;i<N;i++){
		scanf("%d", &M);
        scanf("%d %d", &prethoden, &momentalen);
        aritmeticka=geometriska=1;
		for (j=2;j<M;j++){
			scanf("%d", &broj);
            razlika = momentalen-prethoden;
            kolicnik=momentalen/prethoden;
            prethoden=momentalen;
            momentalen=broj;
            
            if (aritmeticka&&momentalen-prethoden!=razlika) { //ako naideme na broj dva broja kojsto otstapuvaat od praviloto go spustame flagot na 0
				aritmeticka=0;
			}
			if (geometriska&&momentalen/prethoden!=kolicnik){ //ako naideme na broj dva broja kojsto otstapuvaat od praviloto go spustame flagot na 0
				geometriska=0;
			}      
		
		
        }
        if (aritmeticka && geometriska)
            printf("ARITMETICKA I GEOMETRISKA\n");
		else if (aritmeticka)
			printf("ARITMETICKA\n");
		else if (geometriska)
			printf("GEOMETRISKA\n");
		else
			printf("NE E PROGRESIJA\n");
            
       	
	}
	return 0;
}