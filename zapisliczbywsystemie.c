#include<stdio.h>
#include<math.h>

int main()
{
	int n, k, i=0, licznik=0;
	int tab[30];
	printf("Witaj w programie!\n");
	printf("podaj liczbe do zamiany zapisu:  ");
	scanf("%d", &n);
	printf("\npodaj podstawe systemu zapisu:  ");
	scanf("%d", &k);
	if (k>=2&&k<=9) printf("\nwszystko ok. kontynuuje\n");
	else {
		printf ("blad. nie da sie wykonac operacji");
		return 0;
		}
	
	while (n>0)
		{
			tab[i]=n%k;
			n=n/k;
			i++;
			licznik++;
		}
	
	for (i=licznik-1;i>0;i--)
		printf ("%d", tab[i]);	


return 0;
}


