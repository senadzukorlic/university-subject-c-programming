#include <stdio.h>


// int zadatak1 (int n[],int d){
//     printf("Unesite elemnte niza:");
//             scanf("%d",&d);
    
//     for(int i=0;i<d;i++){
//         printf("Element %d",i);
//         scanf("%d",&n[i]);
//     }

// }

// int pokazivac(int n[]){
//  int *p= n;
//  int max = n[0];

// }

int unosMatrice (int mat[5][5], int r,int k){
printf("Unesite broj redova matrice:");
scanf("%d",r);

printf("Unesite broj kolona matrice:");
scanf("%d",k);


for(int i=0;i<r;i++){
    for(int j=0;j<k;j++){
        printf("Element matrice [%d][%d]:",i,j);
        scanf("%d",&mat[i][j]);
    }
}

}

int transponovanaMatrica(int mat[5][5],int d){

    int j=mat[0][d];

    for(int i=j;i<=d;i--){
    for(int j=0;j<d;j++){
        printf("Element matrice [%d][%d]:",i,j);
        scanf("%d",&mat[i][j]);
    }

}
}