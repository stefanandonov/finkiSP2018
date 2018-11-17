/**
 Created by Bani57 on 03.11.2018
**/

#include <stdio.h>
#include <math.h>

int main() {
    float cx1, cy1, r1, cx2, cy2, r2, cx3, cy3, r3;
    scanf("%f %f %f", &cx1, &cy1, &r1);
    scanf("%f %f %f", &cx2, &cy2, &r2);
    scanf("%f %f %f", &cx3, &cy3, &r3);
    float d12 = sqrtf((cx1 - cx2) * (cx1 - cx2) + (cy1 - cy2) * (cy1 - cy2));
    float d23 = sqrtf((cx2 - cx3) * (cx2 - cx3) + (cy2 - cy3) * (cy2 - cy3));
    float d13 = sqrtf((cx1 - cx3) * (cx1 - cx3) + (cy1 - cy3) * (cy1 - cy3));
    int s12 = d12 <= (r1 + r2);
    int s23 = d23 <= (r2 + r3);
    int s13 = d13 <= (r1 + r3);
    if (s12&&s23 && s13)
        printf("SITE KRUZHNICI SE SECHAT MEGJUSEBNO");
    else {
        if (s12)
            printf("A SE SECHE SO B\n");
        if (s23)
            printf("B SE SECHE SO C\n");
        if (s13)
            printf("A SE SECHE SO C\n");
        if (!s12 && !s23 && !s13)
            printf("KRUZHNICITE NE SE SECHAT");
    }
}