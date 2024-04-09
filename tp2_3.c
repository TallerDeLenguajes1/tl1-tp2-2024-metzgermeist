#define N 5
#define M 7
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    //varaibles//
    int i, j;
    int mt[N][M];
    int* punt;
    //inicializo el puntero//
    punt=mt;
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            (*punt)=1 + rand() % 100;
            printf(" [%d] ",*punt);
            punt++;
        }
        printf("\n");
        
    }
}
