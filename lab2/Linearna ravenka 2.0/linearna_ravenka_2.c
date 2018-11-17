/**
 Created by Bani57 on 03.11.2018
**/

#include <stdio.h>

int main() {
    int a, b, c, d;
    char znak1, znak2;
    double x;
    scanf("%dx %c %d = %dx %c %d", &a, &znak1, &b, &c, &znak2, &d);
    if (znak1 == '-')
        b = -1 * b;
    if (znak2 == '-')
        d = -1 * d;
    if (d == b&&a == c)
        printf("BESKONECHNO MNOGU RESHENIJA");
    else if (a == c)
        printf("NEMA RESHENIE");
    else {
        x = 1.0 * (d - b) / (a - c);
        printf("x = %.4f", x);
    }
}