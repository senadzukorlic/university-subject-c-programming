#include <stdio.h>

void unos_niza(int niz[], int n){
    int i;
    for( i = 0; i < n; i++){
        printf("niz[%d] = ",i);
        scanf("%d", &niz[i]);
    }
}

void prikaz_niza(int niz[], int n){
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d ", niz[i]);
    }
}

int suma_niza(int niz[], int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        s = s + niz[i];
    }
    return s;
}

int postoji_vrati_poziciju(int niz[], int n, int broj){
    for(int i = 0; i < n; i++){
        if(niz[i] == broj){
            return i;
        }
    }
    return -1;
}

double srv_neparnih( int niz[], int n){
    double suma = 0;
    int brojac = 0;
    for(int i = 0; i < n; i++){
        if(niz[i] % 2 == 1){
            suma = suma + niz[i];
            brojac++;
        }
    }
    if(brojac > 0){
        return suma / brojac;
    }
    return 0;
}

int najveci_parni_element(int niz[], int n){
    int max = -1;
    for(int i = 0; i < n; i++){
       if (niz[i] % 2 == 0 && niz[i] > max) {
            max = niz[i];
        }
    }
    return max;
}

int main() {
    // int broj;
    int niz[] = {3, 7, 2, 8, 5};
    int n = sizeof(niz) / sizeof(int);
    int max = najveci_parni_element(niz, n);
    prikaz_niza(niz, n);
    if(max != -1){
        printf("najmanji parni element u nizu: %d\n", max);
    }else{
        printf("Nema parnih elemenata.\n");
    }
    printf("Koliko brojeva zelite da unesete (1 - 10): ");
    scanf("%d", &n);
    unos_niza(niz, n);
    // double srv;
    // srv = srv_neparnih(niz, n);
    // prikaz_niza(niz, n);
    // printf("\nSrednja vrednost neparnih elemenata je %.2lf\n", srv);
    // int suma = suma_niza(niz, n);
    // printf("Unesi broj koji trazis: ");
    // scanf("%d", &broj);
    // int p = postoji_vrati_poziciju(niz, n, broj);
    // prikaz_niza(niz, n);
    // printf("\nSuma elemenata niza  niz = %d\n", suma);
    // printf("\nSuma elemenata niza_f niz = %d\n", suma_niza(niz, n));
    // if(p == -1){
    //     printf("\nU nizu niz[] broj %d ne postoji.\n", broj);
    // }else{
    //     printf("\nU nizu niz[] broj %d postoji na poziciji %d.\n", broj, p+1);
    // }

    return 0;
}