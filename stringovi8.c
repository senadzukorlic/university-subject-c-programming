// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int main() {
//    char rec[100];
//    int samoglasnici = 0, suglasnici = 0;

//    printf("Unesite reč: ");
//    scanf("%s", rec);

//    for (int i = 0; rec[i] != '\0'; i++) { //izraz '\0' označava kraj stringa
//        char c = tolower(rec[i]); // Pretvaranje u mala slova za lakšu proveru

//        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//            samoglasnici++;
//         } else if ((c >= 'a' && c <= 'z')) {
//            suglasnici++;
//         }
//     }

//    printf("Broj samoglasnika: %d\n", samoglasnici);
//    printf("Broj suglasnika: %d\n", suglasnici);

//    return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char recenica[200];
    int brojReci = 0;
    int uReci = 0;

    printf("Unesite recenicu: ");
    fgets(recenica, sizeof(recenica), stdin);//koristi se umesto scanf za unos stringova,sizof(recenica) je velicina niza

    for (int i = 0; recenica[i] != '\0'; i++) {
        // Ako naiđemo na razmak ili kraj rečenice, a prethodni karakter nije razmak
        if (recenica[i] == ' ' || recenica[i] == '\n') {
                if(!uReci){//uReci se koristi kao flag,ako bismo ostavili prethodnu if proveru i samo u njoj definisali da se brojReci uvecava,desio bi se problem jer bi se brojReci uvecavao i kada ima 2+ space,zato korsitimo uReci kao flag,gde ga postavljamo da kadad je on null,uvecamo brojReci,i zatim ga postavljamo na 1,sto ce naterati da predje u else 
                    brojReci++;
                    uReci = 1;
                }
        }else{//nekon drugog if bloka uReci je 1,pa se gornji deo nece izvrsiti,onda se postavlja else da pponovo uReci vrati na 0,kako bi se mogla nastaviti iteracija
        uReci = 0;
        }
    }
    printf("Broj reci: %d\n", brojReci);

    return 0;
}

// Funkcija            Značenje
// toupper(c)           Pretvara mala slova u velika slova
// tolower(c)           Pretvara velika slova u mala slova
// strcpy(s1, s2)      kopira string s2 u string s1
// strcat(s1, s2)      konkatenacija stringova, string s2 se dodaje na kraj stringa s1
// strlen(s1)          vraća dužinu stringa s1, vraća se broj karaktera u stringu bez null karaktera
// strcmp(s1, s2)      poređenje stringova, vraća 0 ako su s1 i s2 jednaki, manje od 0 ako je s1<s2
// strchr(s1, ch)      vraća pokazivač na prvo pojavljivanje karaktera ch u stringu s1
// strstr(s1, s2)      vraća pokazivač na prvo pojavljivanje stringa s2 u stringu s1
// strlwr(s1)          sva slova u stringu s1 pretvara u mala slova
// strupr(s1)          sva slova u stringu s1 pretvara u velika slova
// strrev(s1)          obrće string s1

