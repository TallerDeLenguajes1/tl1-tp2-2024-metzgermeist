// codigo a completar
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20

void main()
{   
    //variables//
    int i;
    double vt[N];

    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        vt[i] = (float)(1 + rand() % 100);
        printf("\n%f", vt[i]);
        i++;
    }
}
