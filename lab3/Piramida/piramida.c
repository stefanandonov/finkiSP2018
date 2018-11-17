/**
 Created by Bani57 on 12.11.2018
**/

#include <stdio.h>

int main()
{
    int n,prevrtena;
    scanf("%d %d",&n, &prevrtena);
    int i,j;
    for(i=0;i<n;i++)
    {
        int broj_dzvezdi=2*i+1,broj_prazni=n-1-i;
        if(prevrtena) {
            broj_prazni = i;
            broj_dzvezdi = 2*(n-1-i)+1;
        }
        for(j=0;j<broj_prazni;j++)
            printf(" ");
        for(j=0;j<broj_dzvezdi;j++)
            printf("*");
        for(j=0;j<broj_prazni;j++)
            printf(" ");
        printf("\n");
    }
}
