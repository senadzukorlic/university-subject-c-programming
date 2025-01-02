#include <math.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_SIZE 10

// ZADATAK 3

// Дата је матрица целих бројева М. Имплементирати следеће потпрограме:​
// а) Имплементирати потпрограм који проверава да ли је задата колона матрице палиндром.​

// б) Имплементирати потпрограм који налази разлику (као скуповну операцију) две колоне​
// матрице и формира низ од тих елемената. У ново-креираном низу елементи не смеју да се​
// понављају. Написати процедуру за приказ елемената низа и позвати је у оквиру овог​
// потпрограма за приказ елемената ново-креираног низа.​

// в) Имплементирати непараметризовану процедуру zadatak_3. У процедури је дата матрица​
// целих бројеваа произвољне димензије не веће од 10x10. У оквиру процедуре zadatak_3​
// омогућити кориснику да унесе редни број колоне матрице и провери да ли је задатака колона​
// матрице палиндром (позвати претходно имплементирани потпрограм). У оквиру процедуре​
// zadatak_3 омогућити кориснику да унесе два броја која представају задате колоне матрице.​
// Наћи пресек ове две колоне (позвати претходно имплементирани потпрограм). Процедура​
// zadatak_3 мора бити имплементирана.

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

int palindormMatrice(int *matrica, int *velicina)
{
    int i, brojKolone;
    int odabranaKolona[MAX_SIZE];
    printf("Unesite kolonu matrice za proveru palindroma :");
    scanf("%d", &brojKolone);

    for (i = 0; i < *velicina; i++)
    {
        odabranaKolona[i] = *(matrica + i * (*velicina) + brojKolone);
    }

    int presekKolone = *velicina / 2;
    for (i = 0; i < presekKolone; i++)
    {
        if (odabranaKolona[i] != odabranaKolona[*velicina - i - 1])
        {
            printf("Kolona nije palindrom");
            return 1;
        }
    }
    printf("Kolona je palindrom");
    return 0;
}

int odvojElemente(int *matrica, int *velicina)
{
    int i, brKolone1, brKolone2;

    int kolona1[MAX_SIZE];
    int kolona2[MAX_SIZE];
    int unijaKolona[MAX_SIZE];

    printf("Unesite broj kolone 1:");
    scanf("%d", &brKolone1);

    printf("Unesite broj kolone 2:");
    scanf("%d", &brKolone2);

    for (i = 0; i < *velicina; i++)
    {
        kolona1[i] = *(matrica + i * (*velicina) + brKolone1);
        kolona2[i] = *(matrica + i * (*velicina) + brKolone2);
    }

    int j = 0;

    // Dodavanje elemenata iz kolona1
    for (i = 0; i < *velicina; i++)
    {
        int duplikat = 0;
        for (int k = 0; k < j; k++)
        {
            if (unijaKolona[k] == kolona1[i])
            {
                duplikat = 1;
                break;
            }
        }
        if (!duplikat)
        {
            unijaKolona[j] = kolona1[i];
            j++;
        }
    }

    // Dodavanje elemenata iz kolona2
    for (i = 0; i < *velicina; i++)
    {
        int duplikat = 0;
        for (int k = 0; k < j; k++)
        {
            if (unijaKolona[k] == kolona2[i])
            {
                duplikat = 1;
                break;
            }
        }
        if (!duplikat)
        {
            unijaKolona[j] = kolona2[i];
            j++;
        }
    }

    // Ispis rezultata
    for (i = 0; i < j; i++)
    {
        printf("%d ", unijaKolona[i]);
    }
}

int main()
{
    int matrica[MAX_SIZE][MAX_SIZE];
    int velicina;

    printf("Unesite velicinu matrice : ");
    scanf("%d", &velicina);
    unosMatrice((int *)matrica, &velicina);
    prikazMatrice((int *)matrica, &velicina);
    odvojElemente((int *)matrica, &velicina);
    return 0;
}