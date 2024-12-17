#include <stdio.h>

int pronadjiMaksimalni(int *niz, int velicina) {
    int maks = *niz;
    for (int i = 1; i < velicina; i++) {
        if (*(niz + i) > maks) {
            maks = *(niz + i);
        }
    }
    return maks;
}

int main() {
    int velicina;

    printf("Unesite velicinu niza: ");
    scanf("%d", &velicina);

    int niz[velicina];
    printf("Unesite elemente niza: ");
    for (int i = 0; i < velicina; i++) {
        scanf("%d", &niz[i]);
    }

    int maks = pronadjiMaksimalni(niz, velicina);
    printf("Maksimalni element u nizu je: %d\n", maks);

    return 0;
}
