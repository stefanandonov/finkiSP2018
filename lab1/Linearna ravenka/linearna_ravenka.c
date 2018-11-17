//
// Created by Bani57 on 29.10.2018
//

#include <stdio.h>

int main() {
    int a, b, c, d;
    double x;
    scanf("%dx + %d = %dx + %d", &a, &b, &c, &d);
    x = 1.0 * (d - b) / (a - c);
    printf("x = %.4f", x);
}