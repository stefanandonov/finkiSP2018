/**
 Created by Bani57 on 07.11.2018
**/

#include <stdio.h>

int main() {
    int masi, kapacitet;
    scanf("%d %d", &masi, &kapacitet);
    int i;
    for (i = 0; i < masi; i++) {
        int first = 1, indeks = -1, prethoden_indeks = -1, sortirani = 1, razlichen_smer = 0, broj = 0;
        while (1) {
            scanf("%d", &indeks);
            if (indeks == 0)
                break;
            broj++;
            if (!first) {
                if (indeks < prethoden_indeks)
                    sortirani = 0;
                int smer, prethoden_smer;
                smer = (indeks / 1000) % 10;
                prethoden_smer = (prethoden_indeks / 1000) % 10;
                if (smer != prethoden_smer)
                    razlichen_smer = 1;
            }
            prethoden_indeks = indeks;
            first = 0;
        }
        int masa_ok = sortirani&&!razlichen_smer&&broj <= kapacitet;
        if (masa_ok)
            printf("MASA %d OK\n", i + 1);
        else {
            printf("MASA %d NE E OK\n", i + 1);
            if (broj > kapacitet)
                printf("NADMINAT MASKIMALNIOT BROJ NA STUDENTI NA EDNA MASA\n");
            if (!sortirani)
                printf("STUDENTITE NE SE PODREDENI\n");
            if (razlichen_smer)
                printf("IMA STUDENTI OD POVEKJE SMEROVI\n");
        }
    }
}