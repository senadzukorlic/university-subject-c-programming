#include <math.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
int SIZE_MAX = 100;

int unosMatrice(int *matrica, int *velicina)
{
    int i, j;
    for (i = 0; i < *velicina; i++)
    {
        for (j = 0; j < *velicina; j++)
        {
            printf("Element [%d][%d] :", i, j);
            scanf("%d", (matrica + i * (*velicina) + j));
        }
    }
    printf("\n");
}

int prikazMatrice(int *matrica, int *velicina)
{
    int i, j;
    printf("Matrica je: \n");
    for (i = 0; i < *velicina; i++)
    {
        for (j = 0; j < *velicina; j++)
        {
            printf(" %d", *(matrica + i * (*velicina) + j));
        }
        printf("\n");
    }
}

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

int unosMatrice(int *matrica, int *velicina)
{
    int i, j;
    for (i = 0; i < *velicina; i++)
    {
        for (j = 0; j < *velicina; j++)
        {
            printf("Element [%d][%d] :", i, j);
            scanf("%d", (matrica + i * (*velicina) + j));
        }
    }
    printf("\n");
}

int prikazMatrice(int *matrica, int *velicina)
{
    int i, j;
    printf("Matrica je: \n");
    for (i = 0; i < *velicina; i++)
    {
        for (j = 0; j < *velicina; j++)
        {
            printf(" %d", *(matrica + i * (*velicina) + j));
        }
        printf("\n");
    }
}

void prviZadatakA(int *niz, int *duzina)
{
    int cifra[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int j = 0;
    int flag = 0;
    for (int i = 0; i < *duzina; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (niz[i] == cifra[j])
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (flag)
    {
        printf("Niz  sadrzi cifre");
    }
    else
    {
        printf("Niz ne sadrzi cifre");
    }
}

void ubaciNaPoziciju(int niz[], int duzina)
{
    int pozicija;
    printf("Unesite poziciju u nizu na koju zelite umetnuti novi element: ");
    scanf("%d", &pozicija);

    if (pozicija < 0 || pozicija > duzina)
    {
        printf("Nevalidna pozicija!\n");
        return;
    }

    int element;
    printf("Unesite element koji zelite umetnuti u nizu: ");
    scanf("%d", &element);

    for (int i = duzina; i > pozicija; i--)
    {
        niz[i] = niz[i - 1];
    }

    niz[pozicija] = element;

    duzina++;

    printf("Niz sa dodatim elementom %d na poziciji %d:\n", element, pozicija);
    for (int i = 0; i < duzina; i++)
    {
        printf("%d ", niz[i]);
    }
}

void proveriDaLiPostojiuNizu(int niz[], int duzina)
{
    int broj;
    printf("Ubacite broj za proveru\n");
    scanf("%d", &broj);

    for (int i = 0; i < duzina; i++)
    {
        if (niz[i] == broj)
        {
            printf("Broj postoji u nizu");
            break;
        }
    }

    printf("Broj ne postoji u nizu");
}

void proveriDaLiSeMozeUbaciti(int niz[], int duzina)
{
    int element;
    printf("Ubacite broj za proveru\n");
    scanf("%d", &element);

    int pozicija;
    printf("Unesite poziciju za ubacivanje");
    scanf("%d", &pozicija);

    for (int i = 0; i < duzina; i++)
    {
        if (niz[pozicija] == element)
        {
            printf("Na datoj poziciji se ne moze ubaciti element");
            break;
        }
    }
}

void suma(int niz[], int duzina)
{
    int zbir = 0;

    for (int i = 0; i < duzina; i++)
    {
        zbir = zbir + niz[i];
    }

    printf("Zbir elemenata niza:\n %d", zbir);
}

int meni(int niz[], int duzina)
{
    int opcija;

    printf("\nOpcija 1 - Ubacite zeljeni element na zeljenu poziciju u nizu:\n");
    printf("Opcija 2 - Proverite da li broj postoji u nizu:\n");
    printf("Opcija 3 - Proverite da li se broj moze ubaciti na zeljenu poziciju u nizu:\n");
    printf("Opcija 4 - Izracunajte sumu elemenata niza:\n");
    printf("Opcija 0 - Izadjite iz programa:\n");

    printf("Odaberite opciju:");
    scanf("%d", &opcija);
    do
    {
        switch (opcija)
        {
        case 1:
            ubaciNaPoziciju(niz, duzina);

            break;
        case 2:
            proveriDaLiPostojiuNizu(niz, duzina);

            break;
        case 3:
            proveriDaLiSeMozeUbaciti(niz, duzina);

            break;
        case 4:
            suma(niz, duzina);

            break;
        case 0:
            printf("Izasli ste iz programa");
        default:
            printf("Uneli ste pogresan karakter");
            break;
        }
    } while (opcija != 0);
}

// int rastuci(int *matrica, int *velicina)
// {

//     int zeljeniRed;
//     printf("Unesite red koji zelite proveriti");
//     scanf("%d", &zeljeniRed);

//     int redMatrica[SIZE_MAX];
//     for (int j = 0; j < velicina; j++)
//     {
//         redMatrica[j] = (matrica + zeljeniRed * (*velicina) + j);
//     }

//     int prviEl = redMatrica[0];
//     int drugiEl = redMatrica[1];
//     int zbirPrviIDrugi = prviEl + drugiEl;

//         for (int i = 0; i < velicina; i++)
//     {
//         if (redMatrica[i] > prviEl || redMatrica[prviEl + 1] < prviEl)
//         {
//             printf("Odabrani niz nije rastuci");
//             break;
//         }
//         else
//         {
//             printf("Odabrani niz je rastuci");
//         }
//     }
// }

int main()
{
    int niz[SIZE_MAX];
    int duzina;
    printf("Unesite duzinu niza: ");
    scanf(" %d", &duzina);

    unosNiza(niz, &duzina);
    printf("\n");
    prikazNiza(niz, &duzina);

    meni(niz, duzina);
}
