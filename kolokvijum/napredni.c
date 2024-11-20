// Napredni zadaci:
#include <stdio.h>
#include <string.h>
#include <math.h>

// 1. Suma cifara broja​
// Napiši program koja računa zbir svih cifara broja.​
 void a1()
{
    int a, b = 0;

    printf("unesi broj\n");
    scanf("%d", &a);

    while (a != 0)
    {
        int temp = a % 10;
        b += temp;
        a = a / 10;
    }
    printf("zbir je  %d\n", b);
}

// 2. Niz Fibonacci brojeva​
// Napiši program koji ispisuje prvih n članova Fibonacci niza bez korišćenja nizova, koristeći samo promenljive i petlju.​
void a2()
{
    int n;
    int a = 0, b = 1, temp;

    printf("Unesite broj n: ");
    scanf("%d", &n);

    printf("Prvih %d clanova Fibonacci niza su: \n", n);

    if (n >= 1)
    {
        printf("%d ", a);
    }

    if (n >= 2)
    {
        printf("%d ", b);
    }

    for (int i = 3; i <= n; i++)
    {
        temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }

    printf("\n");

}

// 3. Savršen broj​
// Napiši program koji proverava da li je broj savršen (broj je savršen ako je jednak zbiru svojih delilaca osim samog sebe, npr. 6 = 1 + 2 + 3).​
void a3()
{
    int broj;
    int zbirDelilaca = 0;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    for (int i = 1; i < broj; i++)
    {
        if (broj % i == 0)
        {
            zbirDelilaca += i;
        }
    }
    if (zbirDelilaca == broj)
    {
        printf("%d je savrsen broj.\n", broj);
    }
    else
    {
        printf("%d nije savrsen broj.\n", broj);
    }

}

// 4. Najveći zajednički sadržalac (NZS)​
// Napiši program koji pronalazi najmanji zajednički sadržalac dva broja koristeći matematičke operacije.​

void a4()
{
    int broj1, broj2;
    int nzd = 0;
    printf("unesi dva broja\n");
    scanf("%d %d", &broj1, &broj2);

    for (int i = 1; i <= broj1 * broj2; i++)
    {
        if (i % broj1 == 0 && i % broj2 == 0)
        {
            nzd = i;
            break;
        }
    }
    printf("Najmanji zajednicki  (NZS) brojeva %d i %d je %d.\n", broj1, broj2, nzd);

}

// 5. Kalkulator sa izborom operacije​
// Napiši program koji radi kao jednostavan kalkulator za operacije sabiranja, oduzimanja, množenja i deljenja, koristeći switch za izbor operacije.
void a5()
{
    double num1, num2, result;
    char operation;

    printf("Unesite prvi broj: ");
    scanf("%lf", &num1);

    printf("Unesite drugi broj: ");
    scanf("%lf", &num2);

    printf("Izaberite operaciju (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        printf("rezultat - %.2lf\n ", result);
        break;
    case '-':
        result = num1 - num2;
        printf("rezultat - %.2lf\n ", result);
        break;
    case '*':
        result = num1 * num2;
        printf("rezultat - %.2lf\n ", result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("rezultat - %.2lf\n ", result);
        }
        else
        {
            printf("Nije dozvoljeno deliti sa 0");
        }
        break;
    default:
        printf("birana operacija ne postoji");
}
}

int main(){
    a5();
}