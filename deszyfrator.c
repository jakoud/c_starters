#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>


int main()
{
    FILE *f;
    int licznik;
    int a, b, c;
    f = fopen("kod.txt", "r+");
    while(!feof(f))
    {
    	b = 0;
    	c = 64;
    	for(licznik=0; licznik<8; licznik++)
    	{
    		a = fgetc(f) - 48;
    		b = b + a*c;
    		c=c/2;
		}
	 printf("%c", (char)b );	
	}
return 0;						
}
