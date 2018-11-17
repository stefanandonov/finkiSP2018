#include<stdio.h>

int main() {
	
	int indeks, o1, o2, o3, o4, o5;
	float prosek = 0;
	
	scanf("%d %d %d %d %d %d", &indeks, &o1, &o2, &o3, &o4, &o5);
	
	printf ("Student: %d\n", indeks);
	printf("%d godina\n", 19-indeks/10000);
	prosek = (o1+o2+o3+o4+o5)/5.0;
	printf((indeks/1000%10)==1 ? "KNI\n" : "Ne e KNI\n");
	printf("Prosek: %.2f\n", prosek);
	printf((prosek>=9.5) ? "Nagraden\n" : "Ne e nagraden\n");
	
	return 0;
}