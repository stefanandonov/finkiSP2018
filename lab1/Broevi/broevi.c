#include<stdio.h>
#include<math.h>

int main() {
	
	int x,y,z;
	float prosek = 0;
	int suma=0;
	
	scanf("%d %d %d", &x,&y,&z);
	
	printf("Suma: %d\n", x+y+z);
	prosek = (x+y+z)/3.0;
	printf("Prosek: %.2f\n", prosek);
	printf(x==y ? "Ednakvi se\n" : "Ne se ednakvi\n");
	printf("Absolutna razlika na x so prosekot: %.2f\n", fabs(x-prosek));
	printf("Cifra na desetkite vo sumata: %d\n", (x+y+z)%100/10);
	printf("Broevite zgolemeni za 1: %d %d %d\n", ++x,++y,++z);
	
	return 0;
}