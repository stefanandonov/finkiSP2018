/**
 Created by Bani57 on 24.11.2018
**/

#include <stdio.h>

int main() {
    int n, i, j, p;
    scanf("%d", &n);
    int planini[n];
    for (i = 0; i < n; i++)
        scanf("%d", &planini[i]);
    i = 0;
    while (i < n) {
        while (planini[i] == -1)
            i++;
        if (i < n)
            printf("%d ", planini[i]);
        else
            break;
        p = planini[i];
        j = i + 1;
        while (j < n) {
            if (planini[j] != -1&&planini[j] > p) {
                printf("%d ", planini[j]);
                p = planini[j];
                planini[j] = -1;
            }
            j++;
        }
        planini[i] = -1;
        i++;
        printf("\n");
    }
}