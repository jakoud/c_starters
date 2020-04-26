#include <stdio.h>
#include <time.h>
#define ROZM 40
#define MOD 10

void wypelnijTab (float A[], int rozmiar);
void losowoTab (float A[],int rozmiar);
void wypisywanieTab (float A[],int rozmiar);
float liczsrednia(float A[], int rozmiar);
float najmniejszyelement(float A[],int rozmiar);
float najwiekszyelement(float A[],int rozmiar);
main ()
{
    int rozm;
    srand(time(NULL));

    float tab[ROZM];


    losowoTab (tab,ROZM);
    wypisywanieTab(tab,ROZM);
    printf("\n srednia to %f", liczsrednia(tab,ROZM));
    printf ("\n najmniejszy element to %f",najmniejszyelement(tab,ROZM));
    printf ("\n najwiekszy element to %f",najwiekszyelement(tab,ROZM));
    return 0;
}

void wypelnijTab (float A[], int rozmiar)
{
    int i=0;
    printf("podawaj elementy \n");
    for (i; i<rozmiar; i++)
    {
        scanf("%f",&A[i]);


    }
}

void wypisywanieTab (float A[],int rozmiar)
{
    int i=0;
    for (i; i<rozmiar; i++)

    {
        printf("\n %f ",A[i]);
    }
}
void losowoTab (float A[],int rozmiar)
{

    int i=0;
    for (i; i<rozmiar; i++)
    {
        A[i]=rand()%MOD+1;

    }
}
float liczsrednia(float A[], int rozmiar)
{
    int i=0;
    float suma;
    for(i; i<rozmiar; i++)
    {
        suma+=A[i];
    }
    return suma/rozmiar;
}
float najmniejszyelement(float A[],int rozmiar)
{
    int i=0;
    float k;
k=A[0];
for (i; i<rozmiar; i++)
{
    if (k>A[i]) k=A[i];
}
return k;
}

float najwiekszyelement(float A[],int rozmiar)
{
    int i=0;
    float k;
k=A[0];
for (i; i<rozmiar; i++)
{
    if (k<A[i]) {k=A[i];}
}
return k;
}
