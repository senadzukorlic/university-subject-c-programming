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

void izbaciPrviElement(int *niz, int *duzina)
{
    int i;

    for (i = 0; i < *duzina; i++)
    {
        niz[i] = niz[i + 1];
    }
    (*duzina)--;
    printf("Prvi element je izbacen.\n");
    printf("\n");
}

void paranBroj(int niz[], int duzina)
{
    int i;

    for (i = 0; i < duzina; i++)
    {
        if (niz[i] % 2 == 0)
        {
            printf("Postoji paran broj\n");
            printf("\n");
            return;
        }
    }
    printf("Ne postoji paran broj\n");
    printf("\n");
}

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
    printf("Najmanji paran broj je: %d\n", najmanji);
    printf("\n");
}
// г) Имплементирати непараметризовану процедуру zadatak_2. У оквиру процедуре zadatak_2​
// дат је низ целих бројева. У оквиру ове процедуре позвати процедуру meni која омогућава​
// кориснику да позове претходно имплементирате потпрограме из задатка. Опцијом 1 брише се​
// први елемент из низа, опцијом 2 проверава се да ли у низу постоји парни број, опцијом 3​
// приказује се најмањи парни елемент низа. Опцијом 0 излази се из процедуре meni. Процедура​
// zadatak_2 мора бити имплементирана.
int meni(int niz[], int duzina)
{
    int opcija;
    do
    {

        prikazNiza(niz, duzina);
        printf("\n");
        printf("1 - Obrisite prvi element niza\n");
        printf("2 - Proverite da li ima parnih elemenata niza\n");
        printf("3 - Najmanji parni element niza\n");
        printf("0 - Izadjite iz programa\n");
        printf("Izaberite opciju:\n");
        scanf(" %d", &opcija);

        switch (opcija)
        {
        case 1:
            izbaciPrviElement(niz, duzina);
            break;
        case 2:
            paranBroj(niz, duzina);
            break;
        case 3:
            najmanjiParniBroj(niz, duzina);
            break;
        case 0:
            printf("Izasli ste iz programa");
            break;
        default:
            printf("Uneli ste pogresal karakter");
            break;
        }
    } while (opcija != 0);
}

int main()
{
    int niz[MAX_SIZE];
    int duzina;

    printf("Unesite duzinu niza:");
    scanf("%d", &duzina);

    unosNiza(niz, duzina);

    meni(niz, duzina);
}
