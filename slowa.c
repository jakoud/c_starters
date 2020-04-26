#include <stdio.h>
#include <string.h>
//nie zrobi³em b), bo taki program stworzyliœmy
int main()
{
    int i;
    char slowo[30];
    char slowotestowe[30];
    printf ("Podaj wyraz\n");
    scanf("%s", &slowo);
    printf("Podaj wyraz testowy\n");
    scanf ("%s", &slowotestowe);
    int j, k, l;
	i=strlen(slowo);
	j=0;
	k=strlen(slowotestowe);
	l=0;
	while(j<=i && l<=k)
	{
    if(slowo[j]==slowotestowe[l])
		l++;
    if(l>k) printf ("%s jest skrotka %s", slowotestowe, slowo);


	j++;
	
	}

    return 0;
}




