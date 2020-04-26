#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
	int n, p, b, licznik, licznik2, licznik3, licznik4;
	licznik2=1;
	printf ("Podaj liczbe: ");
	scanf ("%d", &n);
	printf ("Podaj podstawe systemu zapisu:	");
	scanf ("%d", &p);
	if (p<=9 &&p>=2)
	{
		printf ("Kod zapisu w systemie '%d' liczby '%d' to:\t", p, n);
		
		b=1;
		
		while(b<=n)
		{
			b=b*p;
			licznik2++;
		}
		for (licznik3=licznik2;licznik3>0;licznik3--)
		{
			licznik4=0;
			if (n>b)
			{
				while (licznik4<b)
					{
					if (n>licznik4*pow(b,licznik3))
						licznik4++;
					else
						{
						if(n<licznik4*pow(b, licznik3))
							printf ("%d", licznik4-1);
						else 
							printf ("%d", licznik4);		
						}
						
					}
			}
			else
			{
				if (licznik3==licznik2)
				{
					b=b/p;
				}
				else
				{
					printf ("0");
					b=b/p;
				}
			}
		}
	}
	else printf ("blad, nie da sie wykonac operacji");
	
	return 0;
}
