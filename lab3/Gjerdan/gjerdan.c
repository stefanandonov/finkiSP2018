/**
 Created by Bani57 on 12.11.2018
**/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int i,pravilen=1,broj_R=0,broj_B=0,ubav=1,first=1;
    char boja,prev_boja='G';
    for(i=0;i<n;i++)
    {
        scanf("%c",&boja);
        if(boja=='R') {
            broj_R++;
            if(!first&&prev_boja=='R')
                ubav=0;
        }
        else if(boja=='B') {
            broj_B++;
            if(!first && prev_boja=='B')
                ubav=0;
        }
        else if(boja=='G'){
            //printf("%d %d\n",broj_R,broj_B);
            if(!first && broj_R!=broj_B)
                pravilen = 0;
            first=0;
            broj_R=0;
            broj_B=0;
        }
        prev_boja=boja;
    }
    if(pravilen)
    {
        if(ubav)
            printf("UBAV");
        else
            printf("PRAVILEN");
    }
    else
    {
        printf("NEPRAVILEN");
    }
}