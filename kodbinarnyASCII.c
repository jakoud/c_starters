#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
	FILE *f;
	f=fopen("kod.txt", "w+");
	int i, slolicz, a, b, potegamax, licznik;
	char slowo[30];
	
	printf ("Podaj tekst: ");
	
	scanf ("%s", &slowo);
	
	printf ("Kod ASCII '%s' to:\t", slowo);
	
	for(i=0;i<strlen(slowo);i++)
    printf ("%d\t", (int)slowo[i]);
    printf ("\n");

	for (slolicz=0;slolicz<strlen(slowo);slolicz++)
	{
		a=(int)slowo[slolicz];
		b=1;
		potegamax=0;
		while (b<a)
		{
			b=b*2;
			potegamax++;
		}
		for (licznik=potegamax;licznik>=0;licznik--)
		{
			if (a>=b)
			{
				fprintf(f, "1");
				a=a-b;
				b=b/2;
			}
			else
			{
				if (licznik==potegamax)
				{
					b=b/2;
				}
				else
				{
					fprintf(f, "0");
					b=b/2;
				}
			}
			if (licznik==0)
				break;
		}
		fprintf (f, "\n");
	}
	return 0;
}
