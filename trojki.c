#include <stdio.h>
#include<time.h>
#include<math.h>

int main()
{
	srand(time(NULL));
	int i, n, licznik;
	printf ("podaj rozmiar tablicy");
	scanf ("%d", &n);
	int tab[n];
	for (i=0;i<n;i++)
		{
			tab[i]=((2*(rand()%2)-1)*(rand()%10));
			printf ("%d\t", tab[i]);
		}
	printf ("\n");
	licznik=0;
	for (i=0;i<n;i++)
		if (tab[i]<tab[i+1] && tab[i+1]>=tab[i+2])
			{
			printf("%d < %d >= %d\n", tab[i], tab[i + 1], tab[i + 2]);
			licznik++;
			}
	printf ("\n");
	printf ("trojek jest %d", licznik);
	return 0;
}
