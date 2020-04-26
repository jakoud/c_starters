#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int decimal_to_pos (int n,int p)
{
    int pom=n,odw=p,wyn=0; //pom deklarujemy jako liczbe dziesiatna otrzymana. odw deklarujemy jako typ zapisu pozycyjnygo.
    //Dlaczego? Dlatego, ¿e potem bêdziemy odwracaæ powstala liczbe (odw) do wyniku (wyn). Gdybyœmy tego nei zrobili, to by nam
    //ucina³o zera na poczatku , a tego nei chcemy!

    while (pom!=0)             //To inny sposób znajdowania zapisu liczby w systemie pozycyjnym bazuj¹cy na resztach z dzielenia
    {                           //po wykonaniu tej petli dostajemy liczbê w systemie pozycyjnym, ale zapisan¹ odwrotnie
        odw=10*odw+pom%p;       //i z podstawa na poczatku
        pom/=p;
    }
    pom=n;
    printf("\n Liczba zapisana odwrotnie to %d\n",odw);
    while(pom!=0)             //tutaj po prostu odwracamy liczbe zapisana odrwotnie i ju¿ xd
    {                           //na koniec po prostu ucinamy tê cyfrê (podstawê wczesniej na poczatku, teraz juz na koncu).
        wyn=wyn*10+ odw%10;
        odw/=10;
        pom/=p;
        printf("\n wynik %d   odwotna %d   pomoc %d",wyn,odw,pom);
    }
    return wyn;
}
int pos_to_decimal(int n, int p)
{
    int pom=n,k=0,i,h,wynik=0;
    while(pom!=0)
    {
        k++;
        pom/=10;

    }
pom=n;
    for(i=0;i<k;i++)
    {
        wynik+=(pom%10)*pow(p,i);
        pom/=10;
        h=pow(p,3);


        printf("\n wynik %d, potega %i, mnoznik %d, liczba %d",wynik,i,pom%10,pom);



    }
h=pow(5,3);
    printf("\n\n\n\n %d",h);
    return wynik;
}
int main()
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    printf("\n\n\n %d",decimal_to_pos(n,p));
    return 0;
}
