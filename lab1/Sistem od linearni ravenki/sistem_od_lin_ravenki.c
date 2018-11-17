//
// Created by Bani57 on 29.10.2018
//

#include <stdio.h>

int main() {
    int a1, b1, c1, a2, b2, c2;
    double x, y;
    scanf("%dx + %dy = %d", &a1, &b1, &c1);
    scanf("%dx + %dy = %d", &a2, &b2, &c2);

    x = 1.0 * (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    y = -1.0 * (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
    printf("(x, y) = (%.4f, %.4f)", x, y);
}
