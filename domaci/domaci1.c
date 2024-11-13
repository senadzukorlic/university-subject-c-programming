//6. napisi program koji racuna faktorijel brojal koristeci for petlju
//7. napisi program koji proverava da li je broj prost koristeci for petlju
//8  napisi program koji racuna najveci zajednicki delilac dva broja koristeci euklidov algoritam
//9. napisi program koji unosi n brojeva jedan po jedan (bez niza),racuna njihov zbir i prosecnu vrednost koristeci petlju
//10. napisi broj koji ispisuje broj obrnuto npr 123 -> 321

#include <math.h>
#include <stdio.h>

void zadatak6(){
    int a,rez=1;

    printf("Unesite zeljeni broj");
    scanf("%d",&a);

    for(int i=a;i>1;i--){
        rez*=i;
    }
    printf("Faktorijel unetog broja je %d",rez);

}

void zadatak7 (){
    int a;
    int boolean = 1;

    printf("Unesite zeljeni broj ");
    scanf("%d", &a);

    for(int i=2; i < a;i++){
        if(a%i==0 ){
            boolean = 0;
            break;
        }
    }

    if(boolean){
        printf("Uneti broj je prost\n");
    }else{
        printf("Uneti broj nije prost\n");
    }
}

int main(){
    // zadatak6();
    zadatak7();
    return 0;
}
