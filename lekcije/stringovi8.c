#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
   char rec[100];
   int samoglasnici = 0, suglasnici = 0;

   printf("Unesite reč: ");
   scanf("%s", rec);

   for (int i = 0; rec[i] != '\0'; i++) {
       char c = tolower(rec[i]); // Pretvaranje u mala slova za lakšu proveru

       if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
           samoglasnici++;
        } else if ((c >= 'a' && c <= 'z')) {
           suglasnici++;
        }
    }

   printf("Broj samoglasnika: %d\n", samoglasnici);
   printf("Broj suglasnika: %d\n", suglasnici);

   return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char recenica[200];
//     int brojReci = 0;
//     int uReci = 0;

//     printf("Unesite rečenicu: ");
//     fgets(recenica, sizeof(recenica), stdin);

//     for (int i = 0; recenica[i] != '\0'; i++) {
//         // Ako naiđemo na razmak ili kraj rečenice, a prethodni karakter nije razmak
//         if (recenica[i] == ' ' || recenica[i] == '\n') {
//                 if(!uReci){
//                     brojReci++;
//                     uReci = 1;
//                 }
//         }else{
//         uReci = 0;
//         }
//     }
//     printf("Broj reči: %d\n", brojReci);

//     return 0;
// }

