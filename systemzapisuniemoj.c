#include <stdio.h>
 #include <stdlib.h> 
 #include <math.h>
  int decimal_to_pos (int n,int p) 
  { int pom=n,odw=p,wyn=0; 
  while (pom!=0)
   { odw=10*odw+pom%p; pom/=p; } 
   pom=n;
 printf("/n %d",odw);
 while(pom!=0)
 { wyn=wyn*10+ odw%10; odw/=10; pom/=p;
 printf("\n wynik %d   odwotna %d   pomoc %d",wyn,odw,pom); }
 return wyn; } 
int pos_to_decimal(int n, int p) 
{ int pom=n,k=0,i,h,wynik=0; 
while(pom!=0) 
{ k++; pom/=10; }
 pom=n;
 for(i=0;i<k;i++)
 { wynik+=(pom%10)*pow(p,i); pom/=10; h=pow(p,3);
 printf("\n wynik %d, potega %i, mnoznik %d, liczba %d",wynik,i,pom%10,pom); }
 h=pow(5,3); 
printf("\n\n\n\n %d",h); 
return wynik; } 
int main() 
{ int n,p; scanf("%d",&n);
 scanf("%d",&p); 
printf("\n\n\n %d",decimal_to_pos(n,p)); return 0; }
