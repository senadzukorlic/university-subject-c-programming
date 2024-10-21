//Implementirati funkciju koja računa povrsinu pravouglog trougla, a nakon toga izračunaj koren tog broja, kao I log od tog broja I log10 od tog broja.

#include <stdio.h>
#include <math.h>

int main(){
    float a;
    float h;
    float ppt;
    float koren;
    float logPovrsine;
    float log10Povrsine;
    printf("Unesite duzinu osnove pravouglog trougla: ");
    scanf("%f",&a);
    printf("Unesite visinu pravouglog trougla: ");
    scanf("%f",&h);
    ppt = (a*h )/ 2;
    koren = sqrt(ppt);
    logPovrsine = log(ppt);
    log10Povrsine = log10(ppt);


    printf("Povrsina pravouglog trougla je: %f\n",ppt);
    printf("Koren povrsine pravouglog trougla je: %f\n",koren);
    printf("Log povrsine pravouglog trougla je: %f\n",logPovrsine);
    printf("Log10 povrsine pravouglog trougla je: %f\n",log10Povrsine);


    return 0;
}
