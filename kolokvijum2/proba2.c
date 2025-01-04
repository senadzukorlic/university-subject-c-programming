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

int razlikaDveKolone(int *matrica, int *velicina)
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

    for (i = 0; i < j; i++)
    {
        printf("%d ", unijaKolona[i]);
    }
    printf("\n");
}

int meni(int *matrica, int *velicina)
{
    int opcija;
    do
    {
        printf("Opcija 1 - proverite da li je odredjena kolona matrice palindrom : \n");
        printf("Opcija 2 - pronadjite razlike dve zeljene kolone od date matrice : \n");
        printf("Opcija 0 - izadjite iz programa\n");
        printf("Unesite zeljenu opciju:");
        scanf("%d", &opcija);

        switch (opcija)
        {

        case 1:
            palindormMatrice(matrica, velicina);
            break;
        case 2:
            razlikaDveKolone(matrica, velicina);
            break;
        case 0:
            printf("Izasli ste iz programa");
            break;

        default:
            printf("Uneti karakter nije validan");
            break;
        }
    } while (opcija != 0);
}

int main()
{
    int matrica[MAX_SIZE][MAX_SIZE];
    int velicina;

    printf("Unesite velicinu matrice : ");
    scanf("%d", &velicina);
    unosMatrice((int *)matrica, &velicina);
    prikazMatrice((int *)matrica, &velicina);
    meni((int *)matrica, &velicina);
    return 0;
}