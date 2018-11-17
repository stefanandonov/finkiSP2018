#include<stdio.h>

int grade (float points) {
	if (points<50)
		return 5;
	else if (points >= 50&&points <60)
		return 6;
	else if (points >=60 && points < 70)
		return 7;
	else if (points >=70 && points < 80)
		return 8;
	else if (points >=80 && points < 90)
		return 9;
	else
		return 10;
}

int main () {
	
	int N;
	int index, lab, tests, firstPartial, secondPartial, passed=0, indexMax=0, i;
	float summary, summaryMax=0, passedPercent;
	
	scanf("%d", &N);
	
	for (i=0;i<N;i++){
		
		scanf("%d %d %d %d %d", &index, &lab, &tests, &firstPartial, &secondPartial);
		summary = lab + tests * 0.75 + firstPartial * 0.35 + secondPartial*0.40;
		
		printf("%d. %d %.2f %d\n", i+1, index, summary, grade(summary));
		
		if (grade(summary)>5)
			passed++;
		
		if (summary > summaryMax){
			summaryMax=summary;
			indexMax=index;
		}		
	}
	
	printf("Maksimalni poeni ima studentot: %d\n", indexMax);
	printf("Procent na polozeni studenti: %.2f%%\n", (float) passed / N * 100.0);
	

	return 0;
}