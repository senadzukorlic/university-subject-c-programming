#include <stdio.h> //osnovna biblioteka
#include <math.h>

int main() { 
    int a;
    int b;
    int Pk;
    int Pp;
    printf("Unesite velicinu stranice A: " );
    scanf("%d", &a);//scanf sluzi za citanja znakova sa tastature,"%d" znaci ceo broj,&a-smesti u a varijablu(ovo mu dodje kao neki input za a varijablu)
    printf("Unesite velicinu stranice B: ");
    scanf("%d", &b);
    Pp= a*b;
    Pk=a*b;
    printf("Povrsina pravougaonika je: %d\n",Pp);
    return 0;//ovo se korsiti kao normalna return sintaksa
}
