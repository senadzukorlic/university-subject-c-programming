#include <math.h>
#include <stdio.h>

// 2. Написати програм који рачуна и на стандардном излазу приказује површину круга
// полупречника 5.

int povrsinaKruga(int pp)
{

    int pi = 3.1416;

    int newPP = pow(pp, 2);

    double povrsina;

    povrsina = pi * newPP;

    printf("Povrsina kruga je: %.2f", povrsina);
}

int main()
{
    int pp;
    printf("Unesite duzinu poluprecnika: ");
    scanf("%d", &pp);
    povrsinaKruga(pp);
    return 0;
}