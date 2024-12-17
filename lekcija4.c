//1. napisi program koji proverava da li je uneseni broj paran ili neparan koristeci if/else
//2. unesti tri broja i koristi if/else strukturu da pronadjes najveci broj medju njima
//3. napisi program koji racuna zbir svih cifara unetog broja koristeci while petlju
//4. unesi broj i proveri da li je deljiv sa 3 i sa 5 koristeci if/else
//5. napisi program koji izracunava stepen broja koristeci for petlju 

#include <stdio.h>
#include <math.h>

void zadatak1 (){
    int a;

    printf("Unesite broj: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("Broj je paran\n");
        }else{
            printf("Broj je neparan\n");
        }   
       
}

void zadatak2 (){
    int a,b,c;

    if(a>b && a>c){
        printf("Najveci broj je %d\n",a);
        }else if(b>a && b>c){
            printf("Najveci broj je %d\n",b);}
            else{
                printf("Najveci broj je %d\n",c);
            }
           
}

void zadatak3 (){
    int a;
    int zbir;

    
   printf("Unesite broj: ");
   scanf("%d",&a);

    while(a){
    zbir+=a%10;
    a=a/10;
    }
}

void zadatak4 (){
    int a;

    printf("Unesite broj: ");
    scanf("%d",&a);
    if(a%3==0 && a%5==0){
        printf("Broj je deljiv sa 3 i sa 5\n");
        }else{
            printf("Broj nije deljiv sa 3 i sa 5\n");
        }
                 

}

void zadatak5 (){
    int a,b;

    printf("Unesite broj: ");
    scanf("%d",&a);
    printf("Unesite stepen: ");
    scanf("%d",&b);
    for(int i=1;i<b;i++){
        a = a*a;
    }
    printf("Rezultat je %d\n",a);
}

int main(){
    // zadatak1();
    // zadatak2();
    zadatak3();
    // zadatak4();
    // zadatak5();
    return 0;
}