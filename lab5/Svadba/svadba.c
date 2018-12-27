/**
 Created by Bani57 on 07.12.2018
**/

#include <stdio.h>

int main() {
    int N, M, C, i, j, angry = 0;
    scanf("%d %d %d", &N, &M, &C);
    if (N <= 0 || M <= 0 || C <= 0)
        printf("NEVALIDEN VLEZ");
    else if (N > M * C)
        printf("NEMA DOVOLNO MESTA ZA SITE GOSTI");
    else {
            int hates[N][N], seating[N], table[M];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            scanf("%d", &hates[i][j]);
    }
    for (i = 0; i < M; i++)
        table[i] = 0;
        seating[0] = 0;
        table[0]++;
        for (i = 1; i < N; i++) {
            int k = 0, table_ok = 0;
            while (k < M) {
                table_ok = 1;
                for (j = 0; j < i; j++) {
                    if (hates[i][j]&&seating[j] == k) {
                        table_ok = 0;
                        break;
                    }
                }
                if (table_ok && table[k] + 1 <= C) {
                    seating[i] = k;
                    table[k]++;
                    break;
                } else
                    k++;
            }
            if (k >= M) {
                k = 0;
                while (k < M) {
                    if (table[k] + 1 <= C) {
                        seating[i] = k;
                        table[k]++;
                        break;
                    } else
                        k++;
                }
            }
        }

        printf("RASPORED NA SEDENJE: ");
        for (i = 0; i < N; i++)
            printf("%d ", seating[i] + 1);
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (j != i && hates[i][j] && seating[i] == seating[j]) {
                    angry++;
                    break;
                }
            }
        }
        printf("\nPROCENT NA ZADOVOLNI GOSTI: %.2f", 100.0 * (N - angry) / N);
    }

}