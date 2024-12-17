#include <stdio.h>

// Funkcija za transponovanje matrice
void transponujMatricu(int *matrica, int redovi, int kolone, int *transponovana) {
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            *(transponovana + j * redovi + i) = *(matrica + i * kolone + j);
        }
    }
}

int main() {
    int redovi, kolone;

    printf("Unesite broj redova i kolona matrice: ");
    scanf("%d %d", &redovi, &kolone);

    int matrica[redovi][kolone];
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }

    printf("Prikaz matrice pre transponovanja:\n");
    for (int i = 0; i < kolone; i++) {
        for (int j = 0; j < redovi; j++) {
            // printf("%d ", transponovana[i][j]);
        }
        printf("\n");
    }

    int transponovana[kolone][redovi];
    transponujMatricu((int *)matrica, redovi, kolone, (int *)transponovana);

    printf("Transponovana matrica je:\n");
    for (int i = 0; i < kolone; i++) {
        for (int j = 0; j < redovi; j++) {
            printf("%d ", transponovana[i][j]);
        }
        printf("\n");
    }

    return 0;
}



// Funkcija za transponovanje matrice
//void transponujMatricu(int redovi, int kolone, int matrica[redovi][kolone], int transponovana[kolone][redovi]) {
  //  for (int i = 0; i < redovi; i++) {
    //    for (int j = 0; j < kolone; j++) {
      //      transponovana[j][i] = matrica[i][j];
        //}
    //}
//}

//int main() {
  //  int redovi, kolone;

    // Unos dimenzija matrice
    //printf("Unesite broj redova i kolona matrice: ");
    //scanf("%d %d", &redovi, &kolone);

    //int matrica[redovi][kolone], transponovana[kolone][redovi];

    // Unos elemenata matrice
    //printf("Unesite elemente matrice:\n");
    //for (int i = 0; i < redovi; i++) {
      //  for (int j = 0; j < kolone; j++) {
        //    scanf("%d", &matrica[i][j]);
        //}
    //}

    // Poziv funkcije za transponovanje
    //transponujMatricu(redovi, kolone, matrica, transponovana);

    // Ispis transponovane matrice
    //printf("Transponovana matrica:\n");
    //for (int i = 0; i < kolone; i++) {
      //  for (int j = 0; j < redovi; j++) {
        //    printf("%d ", transponovana[i][j]);
        //}
        //printf("\n");
    //}

//    return 0;
//}
