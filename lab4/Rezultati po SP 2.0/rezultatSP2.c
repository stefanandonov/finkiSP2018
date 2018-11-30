#include<stdio.h>

int grade (float points) {
	if (points<50)
		return 5;
	else if (points >= 50&&points <60)
		return 6;
	else if (points >=60&&points < 70)
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
    int grades[100];
    float summaryPoints[100];
    int indexes[100];
	
	scanf("%d", &N);
	
	for (i=0;i<N;i++){
		
		scanf("%d %d %d %d %d", &indexes[i], &lab, &tests, &firstPartial, &secondPartial);
		summaryPoints[i] = lab + tests * 0.75 + firstPartial * 0.35 + secondPartial*0.40;
		grades[i]=grade(summaryPoints[i]);
		printf("%d. %d %.2f %d\n", i+1, indexes[i], summaryPoints[i], grade(summaryPoints[i]));
			
	}
    
    float sumPoints=0;
    int sumGrades=0;
	
    for (i=0;i<N;i++) {
        if (i==0 || summaryPoints[i]>summaryMax){
            indexMax=indexes[i];
            summaryMax=summaryPoints[i];
        }
        
        sumPoints+=summaryPoints[i];
        sumGrades+=grades[i];
        if (grades[i]>5)
            passed++;
    }
	printf("Maksimalni poeni ima studentot: %d\n", indexMax);
    printf("Prosek na poenite na kursot: %.2f\n", sumPoints/(float)N);
    printf("Prosecna ocenka na kursot: %.2f\n", sumGrades/(float)N);
	printf("Procent na polozeni studenti: %.2f%%\n", (float) passed / N * 100.0);
	

	return 0;
}