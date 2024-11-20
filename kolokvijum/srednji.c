// Srednji zadaci

// 1. Faktorijel broja​
// Napiši program koji računa faktorijel broja koristeći for petlju.​
void a1()
{
    int a, suma = 1;
    ;

    printf("unesi broj\n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        suma *= i;
    }
    printf("Ovo je suma ili faktorijal  - %d", suma);
}

// 2. Prost broj​
// Napiši program koji proverava da li je broj prost koristeći for petlju i if-else uslov.​
void a2()
{
    int a;
    char daLiJeProst[20] = "Prost je";
    printf("unesi broj\n");
    scanf("%d", &a);

    if (a < 2)
    {
        printf("nije prost");
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            strcpy(daLiJeProst, "nijeprost");
        }
    }

    printf("%s ", daLiJeProst);
}

// 3. Najmanji zajednički delilac (NZD)​
// Napiši program koji računa NZD dva uneta broja koristeći Euklidov algoritam.​
void a3()
{
    int a, b;
    printf("unesite a i b\n");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("nzd je - %d", a);
}

 // 4. Sumiranje n brojeva​
 //Napiši program koji unosi n brojeva jedan po jedan (bez niza), računa njihov zbir i prosečnu vrednost koristeći petlju.​
void a4()
{
    int n, i;
    double prosecnaVrednost = 0.0, suma = 0, a;

    printf("unesi koliko zelis brojeva\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("unesite vas %d broj\n", i + 1);
        scanf("%lf", &a);
        suma += a;
    }
    prosecnaVrednost = suma / i;
    printf("Zbir je %.2lf prosecna vrednost je - %.2lf", suma, prosecnaVrednost);
}

// 5. Broj obrnuto​
// Napiši program koji ispisuje broj obrnuto (npr. za 12345, izlaz bi bio 54321).​
void a5()
{
    int a, b = 0;

    printf("unesi broj");
    scanf("%d", &a);

    while (a != 0)
    {
        int temp = a % 10;
        b = b * 10 + temp;
        a = a / 10;
    }
    printf("Obrnuti broj je %d", b);
    return 0;
}

int main(){
    a1();
}