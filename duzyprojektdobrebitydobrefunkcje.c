#include <stdio.h>
#include <math.h>
#include <time.h>


void wypelnijTab(int A[], int roz);
void wypelnijTabRand(int A[], int roz);
void wypiszTab (int A[], int roz);
int wypiszMin (int A[], int roz);
int wypiszMax (int A[], int roz);
float srednia (int A[], int roz);
int dominanta (int A[], int roz);
int kolejnosc (int A[], int roz);
const int MOD=10;

int main()
{
srand(time(NULL));
const int ROZ=10;
int tab[ROZ], t;
do
{
    system ("cls");
    printf ("Witaj w programie!\n");
    printf ("1.Wypelnij tabele\n2.Wypelnij tabele losowo\n3.Wypisz tabele\n4.Wypisz element max\n5.Wypisz element min\n6.Podaj srednia wyrazow\n7.Podaj najczestszy wyraz\n8.Posortuj wyrazy w kolejnosci\n0.Wyjscie\nPodaj numer opcji: ");
    scanf ("%d", &t);
    if (t==0) return 0;
    switch(t)
        {
        case 1:
        wypelnijTab (tab, ROZ);
        break;
        case 2:
        wypelnijTabRand (tab, ROZ);
        break;
        case 3:
        wypiszTab (tab, ROZ);
        break;
        case 4:
        wypiszMax (tab, ROZ);
        break;
        case 5:
        wypiszMin (tab, ROZ);
        break;
        case 6:
        srednia (tab, ROZ);
        break;
        case 7:
        dominanta (tab, ROZ);
        break;
        case 8:
        kolejnosc (tab, ROZ);
        break;
        }
    system ("pause");
    }
while (t!=0);

return 0;
}


void wypelnijTab(int A[], int roz)
{
    int i;
    for(i=0;i<roz;i++)
        {
        printf ("podaj %d element", i+1);
        scanf("%d", &A[i]);
        }
}
void wypelnijTabRand(int A[], int roz)
{
    int i;
    for(i=0;i<roz;i++)
        A[i]=rand()%MOD+1;
}
void wypiszTab(int A[], int roz)
{
    int i;
    for(i=0;i<roz;i++)
    printf("%d\n", A[i]);


}
int wypiszMin (int A[], int roz)
{
    int i;
    int pomoc;
    pomoc=A[0];
    for (i=0;i<roz;i++)
        if (pomoc>A[i]) pomoc=A[i];
    printf ("min to %d\n", pomoc);
}
int wypiszMax (int A[], int roz)
{
    int i;
    int pomoc;
    pomoc=A[0];
    for (i=0;i<roz;i++)
        if (pomoc<A[i]) pomoc=A[i];
    printf ("max to %d\n", pomoc);
}
float srednia (int A[], int roz)
{
    int i;
    float suma;
    for (i=0;i<roz;i++)
        suma+=A[i];
    printf ("srednia arytmetyczna to %f\n", suma/roz);
}
int dominanta (int A[], int roz)
{
    int i;
    int B[MOD], j;
    for (j=0;j<MOD;j++)
        B[j]=0;
    for (j=0;j<MOD;j++)
        {for(i=0;i<roz;i++)
            if(A[i]==j+1) B[j]++;
        }
    for (j=0;j<MOD;j++)
    printf ("%d wystepuje %d razy\n", j+1, B[j]);

}
int kolejnosc (int A[], int roz)
{
    int i,j,a,b;
    for (i=0;i<roz;i++)
        for (j=0;j<roz;j++)
            {if(A[j]>A[j+1])
               {a=A[j];
               b=A[j+1];
               A[j]=b;
               A[j+1]=a;
               }
            }
    for (i=0;i<roz;i++)
        printf("%d\n", A[i]);

}
