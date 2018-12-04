/**
 Created by Bani57 on 24.11.2018
**/

#include <stdio.h>

int main() {
    int n, i, j, kraj = 0, skok, teleportacii = 0;
    scanf("%d", &n);
    int niza[n];
    for (i = 0; i < n; i++)
        scanf("%d", &niza[i]);
    while (!kraj) {
        // Najdi kade treba da se teleportirash
        i = 0;
        while (niza[i] == 0)
            i++;
        j = i;
        // Skokaj dodeka mozhesh
        while (niza[j] != 0) {
            skok = niza[j];
            niza[j] = 0;
            if (skok > 0) {
                // Skok desno
                if (j + skok < n) {
                    j += skok;
                } else
                    break;
            } else {
                // Skok levo
                if (j + skok >= 0) {
                    j += skok;
                } else
                    break;
            }

        }
        // Dali treba da se zavrshi?
        kraj = 1;
        for (j = 0; j < n; j++) {
            if (niza[j] != 0) {
                kraj = 0;
                teleportacii++;
                break;
            }
        }

    }
    printf("%d", teleportacii);
}
