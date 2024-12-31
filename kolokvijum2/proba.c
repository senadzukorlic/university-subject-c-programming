#include <stdio.h>
#include <limits.h> // Za INT_MAX
#include <string.h>

#define MAX_SIZE 100

void unosNiza(int niz[], int duzina)
{
    int i;
    printf("Unesite clanove niza:\n");
    for (i = 0; i < duzina; i++)
    {
        printf("niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }
}

void prikazNiza(int niz[], int duzina)
{
    int i;
    printf("Uneti niz:");

    for (i = 0; i < duzina; i++)
    {
        printf(" %d ", niz[i]);
    }
}

// в) Имплементирати потпрограм min_parni_broj који налази најмањи парни број у низу.​

void najmanjiParniBroj(int niz[], int duzina)
{
    int i;

    int parni[duzina];
    int j = 0;

    for (i = 0; i < duzina; i++)
    {
        if (niz[i] % 2 == 0)
        {
            parni[j] = niz[i];
            j++;
        }
    }

    int najmanji = parni[0];
    for (i = 0; i < j; i++)
    {
        if (parni[i] < najmanji)
        {
            najmanji = parni[i];
        }
    }
    printf("Najmanji paran broj je: %d", najmanji);
}

int main()
{
    int niz[MAX_SIZE];
    int duzina;

    printf("Unesite duzinu niza:");
    scanf("%d", &duzina);

    unosNiza(niz, duzina);

    prikazNiza(niz, duzina);
    printf("\n");

    najmanjiParniBroj(niz, duzina);
}
