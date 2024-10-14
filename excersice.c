#include <stdio.h> //osnovna biblioteka
#include <math.h>

int main() { 
    int a;
    int b;
    int Pk;
    int Pp;
    printf("Unesite visinu pravougaonika:" );
    scanf("%d", &a);
    printf("Unesite sirinu pravougaonika:");
    scanf("%d", &b);
    Pp= a*b;
    printf("Povrsina pravougaonika je : %d\n",Pp);
 
    return 0;
}
// napravi funkciju koja racuna duzinu hipotenuze kod pravouglog trougla