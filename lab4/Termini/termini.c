/**
 Created by Bani57 on 03.11.2018
**/

#include <stdio.h>

int main() {
    int slobodni[5];
    int broj_termini;
    int validen = 1, vkupno_slobodni = 0;
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &slobodni[i]);
        vkupno_slobodni += slobodni[i];
        if (slobodni[i] < 0)
            validen = 0;
    }
    scanf("%d", &broj_termini);
    if (!validen)
        printf("NEVALIDEN VLEZ");
    else if (broj_termini > vkupno_slobodni)
        printf("NEMA DOVOLNO SLOBODNI TERMINI");
    else {
        int prosek = vkupno_slobodni / 5;
        int raspored[5];
        for (i = 0; i < 5; i++) {
            if (slobodni[i] < prosek) {
                raspored[i] = slobodni[i];
                slobodni[i] = 0;
            } else {
                raspored[i] = prosek;
                slobodni[i] -= prosek;
            }
            if (broj_termini < raspored[i])
                raspored[i] = broj_termini;
            broj_termini -= raspored[i];
        }
        i = 0;
        while (broj_termini > 0) {
            if (slobodni[i] > 0) {
                if (broj_termini > slobodni[i]) {
                    raspored[i] += slobodni[i];
                    broj_termini -= slobodni[i];
                } else {
                    raspored[i] += broj_termini;
                    broj_termini = 0;
                }
            }
            i++;
        }
        printf("RASPORED NA TERMINI\n");
        printf("Ponedelnik: %d\n", raspored[0]);
        printf("Vtornik: %d\n", raspored[1]);
        printf("Sreda: %d\n", raspored[2]);
        printf("Chetvrtok: %d\n", raspored[3]);
        printf("Petok: %d\n", raspored[4]);
    }

}
