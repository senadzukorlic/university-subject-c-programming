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

int main()
{
    int matrica[SIZE_MAX][SIZE_MAX];
    int velicina;

    printf("Unesite velicinu matrice : ");
    scanf("%d", &velicina);
    unosMatrice((int *)matrica, &velicina);
    prikazMatrice((int *)matrica, &velicina);
    meni((int *)matrica, &velicina);
    return 0;
}