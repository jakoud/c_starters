#include <stdio.h>
#include <string.h>
#include <ctype.h>
int pal (char slowo[30]);

int main()
{
    FILE *f, *g;
    int i;
    char slowo[30];
    char slowotestowe[30];
    g=fopen("wykreslanka.txt", "w+");
    f=fopen("slownik.txt", "r");
    /*while (!feof(f))
    {
        fscanf(f,"%s", slowo);
        if (strlen(slowo)==3)
            printf("%s\n", slowo);
    }*/
    /*while (!feof(f))
    {
        fscanf(f, "%s", slowo);
        if (pal(slowo)!=0)
            printf ("%s\n", slowo);
    }*/
    printf("Podaj wyraz\n");
    scanf ("%s", &slowotestowe);
    int j, k, l, a;
    while (!feof(f))

    {
        a=0;
        fscanf(f, "%s", slowo);
        i=strlen(slowo);
        j=0;
        k=strlen(slowotestowe);
        l=0;
        while(j<=i && l<=k)
        {
            if(slowo[j]==toupper(slowotestowe[l]))
                l++;
            if(l>k) a=1;


            j++;

            if (a==1)  fprintf (g, "%s\n", slowo);
        }


    }
    return 0;
}


int pal(char slowo[])
{

        int i;
        for (i=0; i<(strlen(slowo))/2;i++)
            {if(slowo[i]!=slowo[strlen(slowo)-1-i])
            return 0;
            }
        return 1;
 }



