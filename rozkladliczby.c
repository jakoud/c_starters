#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	printf ("podaj calkowita dodatnia liczbe do rozkladu:   ");
	scanf("%d", &n);
	if (n<=0 || n%1!=0)
		printf ("debilu nie oszukuj");
	int i=2;
	while (n>1)
		{
		if (n%i==0)
			{
			printf("%d*", i);
			n=n/i;
			}
		else i++;
		}
	return 0;		
}
