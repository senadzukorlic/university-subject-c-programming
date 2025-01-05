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
// 150.Дата је улазна квадратна матрица целих бројева димензије 5 x 5. Написати функцију која
// проверава да ли се сви елементи на споредној дијагонали матрице налазе и на главној
// дијагонали матрице. На споредној и главној дијагонали елементи могу да се понављају

int funkcija(int *matrica, int *velicina)
{
    int zbir = 0;
    int broj;

    printf("Unesite broj za izracunavanje zbira cifara:\n ");
    scanf("%d", &broj);

    while (broj != 0)
    {
        zbir += broj % 10;
        broj /= 10;
    }

    printf("Zbir cifata broj je %d:\n", zbir);

    return 0;
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
