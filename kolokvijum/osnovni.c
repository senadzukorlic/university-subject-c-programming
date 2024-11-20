
#include <stdio.h>
#include <string.h>
#include <math.h>

// 1. Provera parnosti​
// Napiši program koji proverava da li je uneseni broj paran ili neparan koristeći if-else naredbu. ​

void a1()

{
    int n;

    printf("Unesite broj: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d je paran broj.\n", n);
    }
    else
    {
        printf("%d je neparan broj.\n", n);
    }

    return 0;
}

// 2. Najveći od tri broja​
// Unesi tri broja i koristi if-else strukturu da pronađeš najveći broj među njima.​

void a2()
{
    int a, b, c;

    printf("Unesite tri broja: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Najveci broj je: %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Najveci broj je: %d\n", b);
    }
    else
    {
        printf("Najveci broj je: %d\n", c);
    }

    return 0;
}

// 3. Zbir cifara broja​
// Napiši program koji računa zbir svih cifara unetog broja koristeći while petlju.​

void a3()
{
    int broj, zbir = 0;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    while (broj != 0)
    {
        zbir += broj % 10;
        broj /= 10;
    }

    printf("Zbir cifara je: %d\n", zbir);

    return 0;
}


// 4. Provera deljivosti​
// Unesi broj i proveri da li je deljiv sa 3 i sa 5 (koristeći if-else).

void a4()
{
    int broj;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    if (broj % 3 == 0 && broj % 5 == 0)
    {
        printf("Broj je deljiv sa 3 i sa 5.\n");
    }
    else if (broj % 3 == 0)
    {
        printf("Broj je deljiv sa 3 ali nije deljiv sa 5.\n");
    }
    else if (broj % 5 == 0)
    {
        printf("Broj je deljiv sa 5 a nije deljiv sa 3.\n");
    }
    else
    {
        printf("Broj nije deljiv ni sa 3 ni sa 5.\n");
    }

    return 0;
}


// 5. Računanje stepena broja​
// Napiši program koji izračunava stepen broja, koristeći for petlju (na primer, izračunaj a^b za dati a i b).
void a5()
{
    double a, b, rezultat;

    printf("Unesite a ");
    scanf("%lf", &a);
    printf("Unesite b ");
    scanf("%lf", &b);

    rezultat = pow(a, b);

    printf("%.2lf na stepen %.2lf je: %.2lf\n", a, b, rezultat);

    return 0;
}

int main(){
    a1();
}