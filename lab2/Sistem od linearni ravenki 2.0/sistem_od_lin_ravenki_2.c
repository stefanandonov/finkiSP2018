/**
 Created by Bani57 on 03.11.2018
**/

#include <stdio.h>

int main() {
    int a1, b1, c1, a2, b2, c2;
    char znak1, znak2;
    int D, Dx, Dy;
    double x, y;
    scanf("%dx %c %dy = %d", &a1, &znak1, &b1, &c1);
    scanf("%dx %c %dy = %d", &a2, &znak2, &b2, &c2);
    if (znak1 == '-')
        b1 = -1 * b1;
    if (znak2 == '-')
        b2 = -1 * b2;
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0&&(Dx == 0 || Dy == 0))
        printf("BESKONECHNO MNOGU RESHENIJA");
    else if (D == 0)
        printf("NEMA RESHENIE");
    else {
        x = 1.0 * Dx / D;
        y = 1.0 * Dy / D;
        printf("(x, y) = (%.4f, %.4f)", x, y);
    }
}
