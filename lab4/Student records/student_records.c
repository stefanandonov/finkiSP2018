#include<stdio.h>



int getGodina(int index) {
    return 19-index/10000;
}

int main() {
    int i,j,n,m,ocenki[100];
    int indexMax, godinaMax;
    float polozeniMax, prosekMax, uspehMax=0;
    
    scanf("%d", &n);

    for (i=0;i<n;i++) {
        int indeks;
        scanf("%d %d", &indeks, &m);
        
        int sum=0;
        int predvideniPredmeti = (getGodina(indeks)-1)*10;
        for (j=0;j<m;j++) {
            scanf("%d", &ocenki[i]);
            sum+=ocenki[i];
           
        } 
        
        float procentPolozeni = m/(float) predvideniPredmeti *100;
        float prosek = sum/(float)m;
        float uspeh = procentPolozeni/100 * prosek;
        
        printf("%d %d %.2f%% %.2f\n", indeks, getGodina(indeks), procentPolozeni, prosek );
        
        if (uspeh>uspehMax) {
            uspehMax = uspeh;
            godinaMax = getGodina(indeks);
            indexMax=indeks;
            polozeniMax = procentPolozeni;
            prosekMax = prosek;
        }     
       
    }     
    printf("Student so najvisok uspeh: %d %d %.2f%% %.2f", indexMax, godinaMax, polozeniMax, prosekMax);
    return 0;
}