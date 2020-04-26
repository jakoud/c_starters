#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
FILE *f;
f=fopen("pomiary.txt", "w+");

int n;
printf ("podaj ilosc punktow podzialu: ");
scanf("%d", &n);
float odl=2/(float)n;
printf ("%f", odl);
float ARG[n][n];
int i, j;
for (i=n;i>=0;i--)
    {
        for (j=0;j<n+1;j++)
        {
            ARG[i][j]=10*exp2f(8-4.0/(-(-1+j*odl)*(-1+j*odl)+1.0)-4.0/(-(-1+i*odl)*(-1+i*odl)+1.0));
            fprintf (f, "%f\t", ARG[i][j]);
        }
        fprintf (f, "\n");
    }







return 0;
}
