//Zadaci osnovni
// #include <math.h>
// #include <stdio.h>
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



// int main(){

// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////
//Zadaci srednji​
// #include <math.h>
// #include <stdio.h>
// 1. Faktorijel broja​
// Napiši program koji računa faktorijel broja koristeći for petlju.​

// void Faktorijel(){
//     int a;
//     int rez = 1;

//     printf("Unesite broj ");
//     scanf("%d",&a);

//     for(int i=a;i>=1;i--){
//         rez*=i;
//     }
//      printf("Faktorijel broja %d je %d\n",a,rez);
// }

// 2. Prost broj​
// Napiši program koji proverava da li je broj prost koristeći for petlju i if-else uslov.​

// void ProstBroj (){
//     int a;
//     int boolean = 1;

//     printf("Unesite broj ");
//     scanf("%d",&a);

//     for(int i=2;i<a;i++){
//         if(a%i==0){
//             boolean = 0;
//             break;
//         }
//     }

//     if(boolean){
//         printf("Uneti broj je prost");
//     }else{
//          printf("Uneti broj nije prost");
//     }
// }

// 3. Najmanji zajednički delilac (NZD)​
// Napiši program koji računa NZD dva uneta broja koristeći Euklidov algoritam.​

// void NZD (){
//     int a,b;
//     printf("Unesite brojeve ");
//     scanf("%d %d",&a,&b);

//     while (b!=0)
//     {
//         int temp = b;
//         b = a%b;
//         a = temp;
//     }
//     printf("Najveci zajednicki delilac je %d\n",a);
// }

// 4. Sumiranje n brojeva​
// Napiši program koji unosi n brojeva jedan po jedan (bez niza), računa njihov zbir i prosečnu vrednost koristeći petlju.​

// void SumiranjeBr(){
//     int a;
//     int b;
//     int rez =0;
//     float prosek;
//     printf("Unesite broj ponavljanja");
//     scanf("%d",&a);

//     for(int i=1;i<=a;i++){
//         printf("Uneli ste broj ");
//         scanf("%d",&b);
//         rez+=b;
//     }
//     prosek = rez/a;

//     printf("Zbir unetih brojeva je %d a prosek je %f",rez,prosek);
// }

// 5. Broj obrnuto​
// Napiši program koji ispisuje broj obrnuto (npr. za 12345, izlaz bi bio 54321).​

// void IspisiObrnuto (){
//     int a,b=0;

//     printf("unesi broj");
//     scanf("%d", &a);             

//     while(a!=0){
//     int temp = a % 10;
//     b = b * 10 + temp;
//     a = a / 10;
//     }
//     printf("Obrnuti broj je %d", b);

// }


// int main(){
// Faktorijel();
// ProstBroj();
// NZD();
// SumiranjeBr();
// IspisiObrnuto();
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////
//Zadaci napredni
#include <math.h>
#include <stdio.h>
#include <string.h>

// 1. Suma cifara broja​
// Napiši program koja računa zbir svih cifara broja.​

// void zbirCifara(){
// int a,zbir = 0;

// printf("Unesite broj ");
// scanf("%d",&a);

// while(a!=0){
//     zbir+=a%10; 
//     a/=10;        
// }

// printf("Zbir cifara broja %d je %d",a,zbir);
// }

// 2. Niz Fibonacci brojeva​
// Napiši program koji ispisuje prvih n članova Fibonacci niza bez korišćenja nizova, koristeći samo promenljive i petlju.​

void fibonacci (){
    int a=0,b=1;
    int fb;
    int n;

    printf("Unesite broj clanova Fibonacci niza ");
    scanf("%d",&n);

     for(int i=1; i<=n;i++){      
        printf("%d ",a);
      fb= a+b;
      a=b;
      b=fb;          
     }
}

// 3. Savršen broj​
// Napiši program koji proverava da li je broj savršen (broj je savršen ako je jednak zbiru svojih delilaca osim samog sebe, npr. 6 = 1 + 2 + 3).​

void savrsenBroj(){
    int a,zbirDelilaca = 0;

printf("Unesite broj ");
scanf("%d",&a);

for(int i=1;i<a;i++){
    if(a%i==0){
        zbirDelilaca+=i;
    }
}

if(a == zbirDelilaca){
    printf("Broj %d je savrsen",a);
}else{
        printf("Broj %d nije savrsen",a);

}
}

// 4. Najveći zajednički sadržalac (NZS)​
// Napiši program koji pronalazi najmanji zajednički sadržalac dva broja koristeći matematičke operacije.​

void sadrzalac(){
    int a,b;
    int nzs=0;

printf("Unesite brojeve ");
scanf("%d %d",&a,&b);

    for(int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            nzs=i;
            break;
        }
    }

    printf("Najveci zajednicki sadrzalac je %d",nzs);
}


// 5. Kalkulator sa izborom operacije​
// Napiši program koji radi kao jednostavan kalkulator za operacije sabiranja, oduzimanja, množenja i deljenja, koristeći switch za izbor operacije.

void kalkulator (){

    double a,b,rez;
    char operacija;

    printf("Unesite prvi broj ");
    scanf("%lf",&a);

     printf("Unesite drugi broj ");
    scanf("%lf",&b);

    getchar();
    
    printf("Izaberite operaciju (+,-,*,/)");
    scanf("%c",&operacija);

    switch(operacija){
        case '+':
        rez=a+b;
        printf("Rezultat sabiranja je %.2lf\n",rez);
        break;
        case '-':
        rez=a-b;
        printf("Rezultat oduzimanja je %.2lf\n",rez);
        break;case '*':
        rez=a*b;
        printf("Rezultat mnozenja je %.2lf\n",rez);
        break;case '/':
        rez=a/b;
        printf("Rezultat deljenja je %.2lf\n",rez);
        break;
    }
}

int main(){
// zbirCifara();
// fibonacci();
// savrsenBroj();
// sadrzalac();
kalkulator();
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
