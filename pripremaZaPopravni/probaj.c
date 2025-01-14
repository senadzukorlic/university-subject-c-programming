#include <math.h>
#include <stdio.h>

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

int main()
{
    int a, n;
    printf("Unesite broj za racunanje stepena: ");
    scanf("%d", &a);

    printf("Unesite stepen: ");
    scanf("%d", &n);
    stepenNaN(a, n);
    return 0;
}