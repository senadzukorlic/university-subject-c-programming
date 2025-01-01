#include <stdio.h>
#include <limits.h>  // Za INT_MAX

#define MAX_SIZE 100

//ZADATAK 1
int palindrom(char x[]) {
int i;
int n = strlen(x);
int broj_poredjenja = n / 2;
for (i = 0; i < broj_poredjenja; i++) {
if (x[i] != x[n - i - 1]) {
// String nije palindrom
return 0;
}
}
// Jeste palindrom
return 1;
}

int vrati_duzinu_stringa(char str[]) {
char ch = str[0];
int brojac = 0;
while (ch != '\0') {
brojac++;
ch = str[brojac];
}
return brojac;
}

int main(void) {
char x[100] = "anavolimilovana";
if (palindrom(x) == 1) {
printf("%s je palindrom.\n");
}
else {
printf("%s nije palindrom.\n");
}
return 0;
}


//ZADATAK 2
// Funkcija za izbacivanje prvog elementa iz niza
void izbaci_sa_pocetka(int *niz, int *velicina) {
    if (*velicina > 0) {
        for (int i = 0; i < *velicina - 1; i++) {
            niz[i] = niz[i + 1];
        }
        (*velicina)--;
        printf("Prvi element je izbacen.\n");
    } else {
        printf("Niz je prazan.\n");
    }
}

// Funkcija koja proverava da li postoji parni broj u nizu
int postoji_parni_broj(int *niz, int velicina) {
    for (int i = 0; i < velicina; i++) {
        if (niz[i] % 2 == 0) {
            return 1;
        }
    }
    return 0;
}

// Funkcija koja nalazi najmanji parni broj u nizu
int min_parni_broj(int *niz, int velicina) {
    int min = INT_MAX;
    int postoji = 0;

    for (int i = 0; i < velicina; i++) {
        if (niz[i] % 2 == 0 && niz[i] < min) {
            min = niz[i];
            postoji = 1;
        }
    }
    return (postoji ? min : -1);  // Vraća -1 ako nema parnog broja
}

// Meni za korisnika
void meni(int *niz, int *velicina) {
    int opcija;
    do {
        printf("\nMeni:\n");
        printf("1 - Izbaci prvi element\n");
        printf("2 - Proveri da li postoji parni broj\n");
        printf("3 - Pronadji najmanji parni broj\n");
        printf("0 - Izlaz\n");
        printf("Izaberite opciju: ");
        scanf("%d", &opcija);

        switch (opcija) {
            case 1:
                izbaci_sa_pocetka(niz, velicina);
                break;
            case 2:
                if (postoji_parni_broj(niz, *velicina)) {
                    printf("Postoji parni broj u nizu.\n");
                } else {
                    printf("Ne postoji parni broj u nizu.\n");
                }
                break;
            case 3: {
                int min_parni = min_parni_broj(niz, *velicina);
                if (min_parni != -1) {
                    printf("Najmanji parni broj u nizu je: %d\n", min_parni);
                } else {
                    printf("U nizu nema parnih brojeva.\n");
                }
                break;
            }
            case 0:
                printf("Izlaz iz programa.\n");
                break;
            default:
                printf("Nepostojeca opcija, pokusajte ponovo.\n");
        }
    } while (opcija != 0);
}

// Glavna procedura
void zadatak_2() {
    int niz[MAX_SIZE], velicina;

    printf("Unesite velicinu niza: ");
    scanf("%d", &velicina);

    printf("Unesite elemente niza: ");
    for (int i = 0; i < velicina; i++) {
        scanf("%d", &niz[i]);
    }

    meni(niz, &velicina);
}

int main() {
    zadatak_2();
    return 0;
}



//ZADATAK 3
#include <stdio.h>

#define MAX 10

// a) Provera da li je kolona palindrom
int kolona_palindrom(int matrica[MAX][MAX], int redovi, int kolona) {
    int i;
    for (i = 0; i < redovi / 2; i++) {
        if (matrica[i][kolona] != matrica[redovi - i - 1][kolona]) {
            return 0;  // Nije palindrom
        }
    }
    return 1;  // Jeste palindrom
}

// Pomocna funkcija za proveru da li element vec postoji u nizu
int postoji_u_nizu(int niz[], int velicina, int element) {
    int i;
    for (i = 0; i < velicina; i++) {
        if (niz[i] == element) {
            return 1;  // Postoji u nizu
        }
    }
    return 0;  // Ne postoji u nizu
}

// b) Razlika dve kolone matrice
void razlika_kolona(int matrica[MAX][MAX], int redovi, int kolona1, int kolona2) {
    int razlika[MAX * 2];
    int velicina = 0;
    int i;

    // Dodaj elemente iz prve kolone koji nisu u drugoj
    for (i = 0; i < redovi; i++) {
        if (!postoji_u_nizu(matrica, redovi, matrica[i][kolona2]) &&
            !postoji_u_nizu(razlika, velicina, matrica[i][kolona1])) {
                razlika[velicina++] = matrica[i][kolona1];
        }
    }

    // Dodaj elemente iz druge kolone koji nisu u prvoj
    for (i = 0; i < redovi; i++) {
        if (!postoji_u_nizu(matrica, redovi, matrica[i][kolona1]) &&
            !postoji_u_nizu(razlika, velicina, matrica[i][kolona2])) {
            razlika[velicina++] = matrica[i][kolona2];
        }
    }

    // Prikazi razliku
    printf("Razlika kolona: ");
    for (i = 0; i < velicina; i++) {
        printf("%d ", razlika[i]);
    }
    printf("\n");
}

// v) Zadati program koji poziva prethodne funkcije
void zadatak_3() {
    int matrica[MAX][MAX], redovi, kolone;
    int i, j;
    int kolona1, kolona2;

    printf("Unesite broj redova i kolona matrice: ");
    scanf("%d %d", &redovi, &kolone);

    printf("Unesite elemente matrice: \n");
    for (i = 0; i < redovi; i++) {
        for (j = 0; j < kolone; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }

    // Provera palindroma
    printf("Unesite broj kolone za proveru palindroma: ");
    scanf("%d", &kolona1);

    if (kolona_palindrom(matrica, redovi, kolona1)) {
        printf("Kolona %d je palindrom.\n", kolona1);
    } else {
        printf("Kolona %d nije palindrom.\n", kolona1);
    }

    // Razlika kolona
    printf("Unesite dve kolone za racunanje razlike: ");
    scanf("%d %d", &kolona1, &kolona2);

    razlika_kolona(matrica, redovi, kolona1, kolona2);
}

int main() {
    zadatak_3();
    return 0;
}
