#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	FILE *f;
	f=fopen("slowa.txt", "r+");
	
	char slowo[30];
	int i, suma;
	
	while (!feof(f))
	{
		suma=0;
		fscanf(f, "%s", slowo);
		
		for (i=0;i<strlen(slowo);i++)
			{
			suma+=(int)slowo[i];
			
			}
		printf ("%s %d\n", slowo, suma);
			
	}
	
	
	return 0;
}
