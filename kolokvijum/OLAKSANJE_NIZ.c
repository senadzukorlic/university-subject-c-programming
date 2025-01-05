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

int main()
{
    int niz[SIZE_MAX];
    int duzina;
    printf("Unesite duzinu niza: ");
    scanf(" %d", &duzina);

    unosNiza(niz, &duzina);
    prikazNiza(niz, &duzina);
}
