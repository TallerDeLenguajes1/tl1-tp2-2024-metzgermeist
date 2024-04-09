#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tama 15

//---estructuras---//
struct {
int velocidad;//entre 1 y 3 GHz
int anio;//entre 2015 y 2023
int cantidad;//entre 1 y 8
char tipo_cpu[tama]; //valores del arreglo tipos
} typedef compu;

//----funciones y procedimientos----//

void cargardatos(int cantPC,compu* PCs);
void mostrardatos(int cantPC,compu* PCs);
int pcVijea(int cantPC,compu* PCs);
int pcVeloz(int cantPC,compu* PCs);


void main()
{
    //--varaibles--//
    int cantPC=5;
    int pcvieja=0;
    int pcrapida=0;

    //--creo el arreglo dinamico de 5 pc--//
    compu* PCs=malloc(cantPC*sizeof(compu));

    cargardatos(cantPC,PCs);

    //--mostramos por pantalla--//
    mostrardatos( cantPC,PCs);

    //--buscamos la mas vieja--//
    pcvieja=pcVijea(cantPC, PCs);

    printf("\nLa computadora mas vieja es: %d ",pcvieja);

    //--buscamos la mas rapida--//
    pcrapida=pcVeloz(cantPC, PCs);


}

//----------------------------------------------------//

void cargardatos(int cantPC,compu* PCs)
{
    for (int i = 0; i < cantPC; i++)
    {
        PCs->velocidad=rand()%3 +1;
        PCs->anio=rand()%9+2015;
        PCs->cantidad=rand()%9;
        puts("que tipo de procesador busca :");
        fflush(stdin);
        gets(PCs->tipo_cpu);
    }
    PCs++;
    
}

void mostrardatos(int cantPC,compu* PCs)
{
    for (int i = 0; i < cantPC; i++)
    {
        printf("\nvelocidad: %d GHZ",PCs->velocidad);
        printf("\nanio: %d ",PCs->anio);
        printf("\ncantidad nucleos: %d ",PCs->cantidad);
        printf("\ntipo de cpu: %s",PCs->tipo_cpu);
    }
    
}

int pcVijea(int cantPC,compu* PCs)
{
    int masvieja=2023;

    for (int i = 0; i < cantPC; i++)
    {
        if (PCs->anio < masvieja)
        {
            masvieja=PCs->anio;
        }
        
    }
    return masvieja;
}

int pcVeloz(int cantPC,compu* PCs)
{
    int masrapida=0;

    for (int i = 0; i < cantPC; i++)
    {
        if (PCs->velocidad > masrapida)
        {
            masrapida=PCs->velocidad;
        }
        
    }
    return masrapida;
}


