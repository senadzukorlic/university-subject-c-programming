#include <stdio.h>

// Funkcija za zamenu dva broja
void zameni(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funkcija koja generiše sledeću permutaciju
int sledecaPermutacija(int *niz, int velicina) {
    int i = velicina - 2;

    // Pronalazi najveći indeks i gde niz[i] < niz[i + 1]
    while (i >= 0 && niz[i] >= niz[i + 1]) {
        i--;
    }
    if (i == -1) {
        return 0;  // Nema više permutacija
    }

    int j = velicina - 1;
    // Pronalazi najveći indeks j gde je niz[j] > niz[i]
    while (niz[j] <= niz[i]) {
        j--;
    }

    // Menja mesta niz[i] i niz[j]
    zameni(&niz[i], &niz[j]);

    // Obrće deo niza posle pozicije i
    int k = i + 1;
    j = velicina - 1;
    while (k < j) {
        zameni(&niz[k++], &niz[j--]);
    }

    return 1;  // Ima još permutacija
}

int main() {
    int n;
    printf("Unesite velicinu niza: ");
    scanf("%d", &n);

    int niz[n];
    printf("Unesite elemente niza: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    // Prikaz prve permutacije (sortirani niz)
    printf("Permutacije:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    // Generisanje i prikaz sledećih permutacija
    while (sledecaPermutacija(niz, n)) {
        for (int i = 0; i < n; i++) {
            printf("%d ", niz[i]);
        }
        printf("\n");
    }

    return 0;
}
