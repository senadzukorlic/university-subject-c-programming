//Zadaci osnovni
#include <math.h>
#include <stdio.h>
// 1. Provera parnosti​
// Napiši program koji proverava da li je uneseni broj paran ili neparan koristeći if-else naredbu. ​



// 2. Najveći od tri broja​
// Unesi tri broja i koristi if-else strukturu da pronađeš najveći broj među njima.​



// 3. Zbir cifara broja​
// Napiši program koji računa zbir svih cifara unetog broja koristeći while petlju.​



// 4. Provera deljivosti​
// Unesi broj i proveri da li je deljiv sa 3 i sa 5 (koristeći if-else).​



// 5. Računanje stepena broja​
// Napiši program koji izračunava stepen broja, koristeći for petlju (na primer, izračunaj a^b za dati a i b).



int main(){

return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//Zadaci srednji​
#include <math.h>
#include <stdio.h>
// 1. Faktorijel broja​
// Napiši program koji računa faktorijel broja koristeći for petlju.​



// 2. Prost broj​
// Napiši program koji proverava da li je broj prost koristeći for petlju i if-else uslov.​



// 3. Najmanji zajednički delilac (NZD)​
// Napiši program koji računa NZD dva uneta broja koristeći Euklidov algoritam.​



// 4. Sumiranje n brojeva​
// Napiši program koji unosi n brojeva jedan po jedan (bez niza), računa njihov zbir i prosečnu vrednost koristeći petlju.​



// 5. Broj obrnuto​
// Napiši program koji ispisuje broj obrnuto (npr. za 12345, izlaz bi bio 54321).​



int main(){

return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//Zadaci napredni
#include <math.h>
#include <stdio.h>
// 1. Suma cifara broja​
// Napiši program koja računa zbir svih cifara broja.​



// 2. Niz Fibonacci brojeva​
// Napiši program koji ispisuje prvih n članova Fibonacci niza bez korišćenja nizova, koristeći samo promenljive i petlju.​



// 3. Savršen broj​
// Napiši program koji proverava da li je broj savršen (broj je savršen ako je jednak zbiru svojih delilaca osim samog sebe, npr. 6 = 1 + 2 + 3).​



// 3. Najveći zajednički sadržalac (NZS)​
// Napiši program koji pronalazi najmanji zajednički sadržalac dva broja koristeći matematičke operacije.​



// 4. Kalkulator sa izborom operacije​
// Napiši program koji radi kao jednostavan kalkulator za operacije sabiranja, oduzimanja, množenja i deljenja, koristeći switch za izbor operacije.



int main(){

return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////


























// void paranIliNe (){
//     // Napiši program koji proverava da li je uneseni broj paran ili neparan koristeći if-else naredbu. ​

//     int a;

//     printf("Unesite broj:");
//     scanf("%d",&a);

//     if(a%2==0){
//     printf("Broj je paran");
//     }else{
//         printf("Broj je neparan");
//     }
// }

// void najveciBroj(){
//     // Unesi tri broja i koristi if-else strukturu da pronađeš najveći broj među njima.​

//     int a,b,c;

//     printf("Unesite broj a: ");
//     scanf("%d",&a);

//     printf("Unesite broj b: ");
//     scanf("%d",&b);

//     printf("Unesite broj c: ");
//     scanf("%d",&c);


//     if(a>b && a>c){
//         printf("Najveci broj je a");
//     }else if(b>a && b>c){
//           printf("Najveci broj je b");
//     }else{
//           printf("Najveci broj je c");
//     }
// }

// void zbirSvihCifara(){
//   //Napiši program koji računa zbir svih cifara unetog broja koristeći while petlju.​

//     int a;
//     int zbir = 0;

//     printf("Unesite broj: ");
//     scanf("%d", &a);

//     while (a != 0){
//         zbir += a % 10;         
//         a /= 10;                
//     }

//     printf("Zbir cifara je: %d\n", zbir);
// }

// void deljivSa3i5(){
//     // Unesi broj i proveri da li je deljiv sa 3 i sa 5 (koristeći if-else).​

//     int a;

//     printf("Unesite broj a: ");
//     scanf("%d",&a);

//     if(a%3!=0 && a%5!=0){
//         printf("Broj nije deljiv sa 5 i sa 3");
//     } else if (a % 3 == 0)
//     {
//         printf("Broj je deljiv sa 3 ali nije deljiv sa 5.\n");
//     }
//     else if (a % 5 == 0)
//     {
//         printf("Broj je deljiv sa 5 ali nije deljiv sa 3.\n");
//     }
//     else
//     {
//         printf("Broj je deljiv sa 3 i sa 5.\n");
//     }
// }

// void stepenBroja(){
//     //Napiši program koji izračunava stepen broja, koristeći for petlju (na primer, izračunaj a^b za dati a i b).

//     int a,b;
//     double stepen = 1;

//     printf("Unesite broj a: ");
//     scanf("%d",&a);  
    
//     printf("Unesite broj b: ");
//     scanf("%d",&b);  

//     for(int i=1;i<=b;i++){
//         stepen = stepen*a;
//     }
//     printf("Stepen broja a iznosi %lf",stepen);


// }
