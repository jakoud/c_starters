#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	FILE *f, *g;
	f=fopen("bazaAut.txt", "r+");
	g=fopen("zabytki.txt", "w+");
	int licznik = 0, przebieg, pojemnosc, rokprodukcji, i;
    char slowo[31], marka[31], model[31];
	
	while(!feof(f))
	{
		fscanf(f, "%s", slowo);
		licznik++;
	}
	fclose(f);
	licznik/=5;
	f=fopen("bazaAut.txt", "r+");
	for(i=0;i<licznik;i++)
			{
				fscanf(f, "%s", marka);
				fscanf(f, "%s", model);
				fscanf(f, "%d", przebieg);
				fscanf(f, "%d", pojemnosc);
				fscanf(f, "%d", rokprodukcji);
				if(2018 - rokprodukcji >= 25)
       				{
			            fprintf(g, "%s\n", marka);
			            fprintf(g, "%s\n", model);
			            fprintf(g, "%d\n", przebieg);
			            fprintf(g, "%d\n", pojemnosc);
			            fprintf(g, "%d\n", rokprodukcji);
					}
			}	
	fclose(f);
	fclose(g);
	return 0;

}
