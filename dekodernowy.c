#include <stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main()
{
	FILE *f, *g;
	f=fopen("kod.txt", "r+");
	g=fopen("dekod.txt", "w+");
	int i, j, m;
	while (!feof)
	{
		fscanf(f, "%d", &i);
		for (j=0;j<8;j++)
		{
			m+=(i/pow(10,8-j))*pow(2,j);
			fprintf (g, "%s", (char)m);
		}
		
	}
	
	return 0;
}
