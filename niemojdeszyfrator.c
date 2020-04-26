#1. ZAKODOWANIE S£OWA (ASCII W BINARNYM) : ZERA - SLOWO (DO ÓSMEGO ZNAKU) - LOSOWO MIEDZY 0 A 1 (DO 13 ZNAKU) ----------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int tab1[13];
    int tab2[13];
    FILE *f;
    char slowo[20];
    int licznik, licznik2, licznik3, licznik4, licznik5;
    int a, b, c;
    printf("Podaj slowo: ");
    scanf("%s", slowo);
    f=fopen("kodASCII.txt", "w+");
    for(licznik=0; licznik<strlen(slowo); licznik++)
    {
        a = (int)slowo[licznik];
        b = 1;
        licznik2 = 0;
        licznik4 = 0;
        fprintf(f, "%d. ", licznik+1);
        while(b<a)
        {
            b=b*2;
            licznik2++;
        }
        for(licznik3=licznik2; licznik3>=0; licznik3--)
        {
            if(a>=b)
            {
                tab1[licznik4] = 1;
                licznik4++;
                a=a-b;
                b = b/2;
            }
            else
            {
                if(licznik3==licznik2)
                {
                    b=b/2;
                }
                else
                {
                    tab1[licznik4] = 0;
                    licznik4++;
                    b = b/2;
                }
            }
        }
        c = 8 - licznik4;
        for(licznik3 = 0; licznik3<c; licznik3++)
        {
            tab2[licznik3] = 0;
        }
        for(licznik5 = 0; licznik5<licznik4; licznik5++)
        {
            tab2[licznik3] = tab1[licznik5];
            licznik3++;
        }

        while(licznik3<13)
        {
            tab2[licznik3] = rand()%2;
            licznik3++;
        }
        for(licznik2=0; licznik2<13; licznik2++)
        {
            fprintf(f, "%d", tab2[licznik2]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    return 0;
}


#2. DEKODOWANIE POWY¯SZEGO PROGRAMU ----------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    FILE *f;
    int licznik;
    int a, b, c;
    f = fopen("kodASCII.txt", "r");
    while(!feof(f))
    {
    	b = 0;
    	c = 128;
    	for(licznik=0; licznik<8; licznik++)
    	{
    		a = fgetc(f) - 48;
    		b = b + a*c;
    		c=c/2;
		}
		fgetc(f);
		fgetc(f);
		fgetc(f);
		fgetc(f);
		fgetc(f);
        printf("%c", (char)b );
    }
    fclose(f);
    return 0;
}




