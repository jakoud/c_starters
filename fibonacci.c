#include<stdio.h>
#include<math.h>
//fibonacci
int main()
{
	int n, i;
	int F[50];
	F[0]=1;
	F[1]=1;
	printf("witaj w programie!\n");
	printf("podaj numer wyrazu ciagu fibonacciego:\t");
	scanf("%d", &n);
	if (n>=2)
		{
			for (i=2;i<n;i++)
				F[i]=F[i-1]+F[i-2];
			
			printf ("twoj wyraz to:\t%d", F[n]);
		}
	else if (n>0)	
			printf ("twoj wyraz to:\t 1");
		else printf ("debilu wpisz normalna liczbe a nie ujemne smieszku jeden");
	
	return 0;
}
