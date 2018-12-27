/**
 Created by Bani57 on 06.12.2018
**/

#include <stdio.h>

int main() {
    int m, n, i, j, finished = 0;
    scanf("%d %d", &m, &n);
    int mat[m][n], printed[m][n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            printed[i][j] = 0;
        }
    }
    i = j = 0;
    while (!finished) {
        finished = 1;
        while (j < n&&!printed[i][j]) {
            finished = 0;
            printf("%d ", mat[i][j]);
            printed[i][j] = 1;
            j++;
        }
        i++;
        j--;
        while (i < m&&!printed[i][j]) {
            finished = 0;
            printf("%d ", mat[i][j]);
            printed[i][j] = 1;
            i++;
        }
        j--;
        i--;
        while (j >= 0 && !printed[i][j]) {
            finished = 0;
            printf("%d ", mat[i][j]);
            printed[i][j] = 1;
            j--;
        }
        i--;
        j++;
        while (i >= 0 && !printed[i][j]) {
            finished = 0;
            printf("%d ", mat[i][j]);
            printed[i][j] = 1;
            i--;
        }
        i++;
        j++;
    }
}