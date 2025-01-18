// 12. Унети два броја а и n. Написати програм који рачуна степен an

int stepenNaN(int a, int n)
{

    int suma = a;
    int i = 1;
    while (i < n)
    {
        suma *= a;
        i++;
    }
    printf("Broj %d na %d iznosi: %d", a, n, suma);
}

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