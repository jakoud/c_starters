#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char slowo[30], slowotestowe[30];
	printf("podaj slowo do sprawdzenia\t");
	scanf("%s", slowo);
	printf("podaj slowo testowe\t");
	scanf("%s", slowotestowe);
	int i=0,l=0;
	int k=strlen(slowo), m=strlen(slowotestowe);
	while (i<=k&&l<=m)
		{
		if (slowo[i]==slowotestowe[l])
			l++;
		if (l>strlen(slowotestowe))
			printf ("%s jest skrotka %s", slowotestowe, slowo);
			
			i++;
		}
			
	return 0;
}
