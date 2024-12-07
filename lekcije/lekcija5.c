// // tip_povratne_vrednosti ime_funkcije(tip parametar1, tip parametar2, ...) {
//     // telo funkcije
//     // return povratna_vrednost; // ako je tip povratne vrednosti razlicit od void
// // }

// #include <stdio.h>

// // Definicija funkcije
// int kvadrat(int broj) {
//     return broj * broj;
// }

// int main() {
//     int x = 5;
//     printf("Kvadrat broja %d je %d\n", x, kvadrat(x));
//     return 0;
// }


// #include <stdio.h>

// // Funkcija bez povratne vrednosti
// void pozdrav() {
//     printf("Zdravo, dobrodošli!\n");
// }

// int main() {
//     pozdrav();  // Poziv funkcije
//     return 0;
// }



// //rekurzivna
// #include <stdio.h>

// int faktorijel(int n) {
//     if (n == 0)
//         return 1;  // Bazni slucaj
//     else
//         return n * faktorijel(n - 1);  // Rekurzivni poziv
// }

// int main() {
//     int broj = 5;
//     printf("Faktorijel broja %d je %d\n", broj, faktorijel(broj));
//     return 0;
// }


// // tip *ime_pokazivaca;
// int a = 10;   // Obicna promenljiva
// int *p = &a;  // Pokazivac cuva adresu promenljive a


// int a = 10;
// int *p = &a;
// //printf("%d\n", *p); // Dereferenciranje pokazivaca, ispisuje 10

#include <stdio.h>

int main() {
    int a = 10;
    int *p;       // Deklaracija pokazivaca
    p = &a;       // Pokazivac cuva adresu promenljive a

    printf("Vrednost a: %d\n", a);
    printf("Adresa a: %p\n", (void*)&a);//%p-specofikator za ispis memoriske vrednosti,void je moranje navesti jer memoriska vrednost to ocekuje 
    printf("Pokazivac p pokazuje na vrednost: %d\n", *p); // Dereferenciranje

    return 0;
}

// #include <stdio.h>

// int main() {
//     int broj = 25;
//     int *pokazivac = &broj;  // Pokazivac cuva adresu promenljive broj

//     printf("Vrednost broj: %d\n", broj);
//     printf("Adresa broj: %p\n", (void*)&broj);
//     printf("Pokazivac pokazuje na vrednost: %d\n", *pokazivac);

//     // Promena vrednosti kroz pokazivac
//     *pokazivac = 50;
//     printf("Nova vrednost broj: %d\n", broj);

//     return 0;
// }



// #include <stdio.h>

// void promeniVrednost(int *p) {
//     *p = 42; // Menja vrednost na adresi pokazivaca
// }

// int main() {
//     int broj = 10;
//     printf("Pre: %d\n", broj);
//     // promeniVrednost(&broj);
//     // printf("Posle: %d\n", broj);
//     return 0;
// }
