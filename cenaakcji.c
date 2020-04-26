#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	FILE *f;
	f=fopen("cenaakcji.txt", "r");
	float cena;
	int tab[30];
	int Z[30];
	int i=0;
	int j=0;
	while (!feof)
		{
			fscanf (f, "%s", cena);
			tab[i]=cena;
			i++;
			j++;
		}
	i=0;	
	int pomoc;
	int k;
	for (k=0;k<j;k++)
    {
	pomoc=tab[k];
    for (i=k;i<j;i++)
    if (pomoc<tab[i]) 
		pomoc=tab[i];
	Z[k]=pomoc-tab[k];
	}
    int pomoc2;
    pomoc=Z[0];
    for (i=0;i<j;i++)
        if (pomoc2<Z[i]) pomoc=Z[i];
	
	printf ("maksymalny zysk to: %f" , pomoc*1000);
	
    return 0;
    
    
    
}

