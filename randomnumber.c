#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int max_liczba;
	printf("podaj liczbe od jeden do ile chcesz, ale rozsadnie ;)\n");
	scanf("%d", &max_liczba);
	int i=rand()%max_liczba;
	int s;
	printf ("wybralem liczbe od 1 do %d. zgadnij jaka ;)\npodaj liczbe:\t", max_liczba);
	scanf("%d", &s);
	while (s!=i)
		{
		if (s>i) printf ("za duzo! sprobuj ponownie:\t");
		else printf ("za malo! sprobuj ponownie:\t");
		scanf ("%d", &s);
		}
	printf ("udalo Ci sie, gratulacje!");
	return 0;
}
