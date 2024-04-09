// codigo a completar
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20

void main()
{   
    //variables//
    
    int i;
    double* punt;
    double vt[N];

    //lo inicalizamos al puntero//
    punt=vt;

    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        *punt = (float)(1 + rand() % 100);
        printf("\n%.2f", *punt);
        punt++;
    }
}