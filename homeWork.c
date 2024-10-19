// napravi funkciju koja racuna duzinu hipotenuze kod pravouglog trougla
#include <stdio.h>
#include <math.h>

int main (){
    int a;
    int b;
    int korenA;
    int korenB;
    int stepenovanRez;
    int rez;

printf("Unesite duzinu katete A: ");
scanf("%d",&a);
korenA = a*a;
printf("Unesite duzinu katete B: ");
scanf("%d",&b);
korenB = b*b;
stepenovanRez = korenA + korenB;
rez = sqrt(stepenovanRez);

printf("Duzina hipotenuze je: %d\n",rez);
return 0;
}