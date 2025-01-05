// 54. Дат је низ целих бројева x у којем се вредности могу понављати. Написати процедуру за
// додавање новог елемента на крај низа. Написати процедуру која ће формирати нови низ y од
// елемената низа x при чему се вредности у низу y не смеју понављати. Приказати садржај низова
// x и y
int SIZE_MAX = 100;

void funkcija(int *niz, int *duzina)
{

    int dodatiEl;
    int noviNiz[*duzina];

    printf("Unesite element za dodavanje:");
    scanf("%d", &dodatiEl);

    niz[(*duzina)] = dodatiEl;
    (*duzina)++;

    for (int i = 0; i < *duzina; i++)
    {
        printf("%d", niz[i]);
    }

    int j = 0;

    for (int i = 0; i < *duzina; i++)
    {
        int flag = 0;
        for (int k = 0; k < j; k++)
        {

            if (noviNiz[k] == niz[i])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            noviNiz[j] = niz[i];
            j++;
        }
    }

    printf("\n");

    for (int i = 0; i < j; i++)
    {
        printf(" %d", noviNiz[i]);
    }
}

// 63. Дат је низ целих бројева. Имплементирати потпрограм који у задатом низу целих бројева
// рачуна колико има елемената низа чија је вредност већа од средње вредности свих елемената
// низа.

int srednjaVrednost(int *niz, int *duzina)
{
    int zbir = 0;
    int brojac = 0;

    for (int i = 0; i < *duzina; i++)
    {
        zbir += niz[i];
        brojac++;
    }
    int srednjaVr = zbir / brojac;
    int brojac2 = 0;

    for (int i = 0; i < *duzina; i++)
    {
        if (srednjaVr < niz[i])
        {
            brojac2++;
        }
    }
    printf("Broj elemenata cija je vrednost veca od prosecne: %d", brojac2);
}

// 64. Дат је низ целих бројева. Имплементирати потпрограм који у задатом низу целих бројева
// помера све елементе низа за једно место удесно.
int pomeriDesno(int *niz, int *duzina)
{
    int prviEl = niz[*duzina - 1];

    int noviNiz[SIZE_MAX];
    noviNiz[0] = prviEl;
    int k = 1;
    for (int i = 0; i < *duzina - 1; i++)
    {
        noviNiz[k] = niz[i];
        k++;
    }
    printf("Matrica pomerena za po jedno mesto u desno\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d", noviNiz[i]);
    }
    return 0;
}

// 66. Дат је низ целих бројева. Имплементирати потпрограм који у задатом низу целих бројева
// помера све елементе низа за n места удесно.

void funkcija(int *niz, int *duzina)
{
    int brojMesta;
    printf("Unesite broj za koliko mesta zelite pomeriti raored niza: ");
    scanf("%d", &brojMesta);

    int noviNiz[SIZE_MAX];
    int k = 0;
    for (int i = *duzina - brojMesta; i < *duzina; i++)
    {
        noviNiz[k] = niz[i];
        k++;
    }

    int noviBrojac = brojMesta;
    for (int i = 0; i < *duzina - brojMesta; i++)
    {
        noviNiz[noviBrojac] = niz[i];
        noviBrojac++;
    }

    printf("Niz pomeren za n mesta u desno:\n");
    for (int i = 0; i < *duzina; i++)
    {
        printf("%d ", noviNiz[i]);
    }
}

// 68. Дат је низ целих бројева. Имплементирати потпрограм који у задатом низу целих бројева
// убацује нови елемент на задату позицију.
void funkcija(int *niz, int *duzina)
{
    int pozicija;
    printf("Unesite poziciju u nizu na koju zelite umetnuti novi element: ");
    scanf("%d", &pozicija);

    if (pozicija < 0 || pozicija > *duzina)
    {
        printf("Nevalidna pozicija!\n");
        return;
    }

    int element;
    printf("Unesite element koji zelite umetnuti u nizu: ");
    scanf("%d", &element);

    for (int i = *duzina; i > pozicija; i--)
    {
        niz[i] = niz[i - 1];
    }

    niz[pozicija] = element;

    (*duzina)++;

    printf("Niz sa dodatim elementom %d na poziciji %d:\n", element, pozicija);
    for (int i = 0; i < *duzina; i++)
    {
        printf("%d ", niz[i]);
    }
}
// 79. а) Имплементирати функцију која рачуна збир цифара неког задатог броја.
int funkcija()
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