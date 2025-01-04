#include <math.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int SIZE_MAX = 100;

void unosNiza(int *niz, int *duzina)
{
    int i;
    printf("Unesite clanove niza:\n");
    for (i = 0; i < *duzina; i++)
    {
        printf("niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }
}

void prikazNiza(int *niz, int *duzina)
{
    int i;
    printf("Uneti niz:");

    for (i = 0; i < *duzina; i++)
    {
        printf(" %d ", niz[i]);
    }
}

// 68. Дат је низ целих бројева. Имплементирати потпрограм који у задатом низу целих бројева
// убацује нови елемент на задату позицију.

void funkcija(int *niz, int *duzina)
{
    int pozicija;
    printf("Unesite poziciju u nizu na koju zelite umetnuti novi element: ");
    scanf("%d", &pozicija);

    int element;
    printf("Unesite element koji zelite umetnuti u nizu: ");
    scanf("%d", &element);

    int noviNiz[SIZE_MAX];
    int k = 0;

    printf("Niz pomeren za n mesta u desno:\n");
    for (int i = 0; i < *duzina; i++)
    {
        printf("%d ", noviNiz[i]);
    }
}

int main()
{
    int niz[SIZE_MAX];
    int duzina;
    printf("Unesite duzinu niza: ");
    scanf(" %d", &duzina);

    unosNiza(niz, &duzina);
    prikazNiza(niz, &duzina);
    printf("\n");
    funkcija(niz, &duzina);
}
