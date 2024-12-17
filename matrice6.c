
#include <stdio.h>

void unos_matrice(int mat[20][20], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("mat[%d][%d] = ", i,j);
            scanf("%d", &mat[i][j]); //zapravo ovo smesta elemente u matrici
        }
    }
}

void prikaz_matrice(int mat[20][20], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]); //ispisuje vrednost koja se nalazi na mesti ij
        }
        printf("\n"); //nakon svakog ispisanog reda,prebaci na novi red
    }
}

void ispis_memorijskih_adresa(int mat[20][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Adresa mat[%d][%d] = %p\n", i, j, (void*)&mat[i][j]);
        }
    }
}

int suma_prvog_reda(int mat[20][20], int n){
    int i, j, suma;
    suma = 0;
    i = 0;
    for(j = 0; j < n; j++){
        suma = suma + mat[i][j];
    }
    return suma;
}

int suma_prve_kolone(int mat[20][20], int n){
    int i, j, suma;
    suma = 0;
    j = 0;
    for(i = 0; i < n; i++){
        suma = suma + mat[i][j];
    }
    return suma;
}

int suma_dijagonale(int mat[20][20], int n){
    int i, suma;
    suma = 0;
    for(i = 0; i < n; i++){
        suma = suma + mat[i][i];
    }
    return suma;
}

int max_element_matrice(int mat[20][20], int n){
    int i, j, max;
    max = mat[0][0];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(max < mat[i][j]){//ako je max manji od trenutnog clana matrice(a proverice se svaki clan,zato sto se iterira kroz svaki clan matrice),onda je taj clan najveci,pa ga dodeljujemo max-u
                max = mat[i][j];
            }
        }
    }
    return max; //inace je max najveci,pa cemo samo njega koristiti
}

int min_element_matrice(int mat[20][20], int n){
    int i, j, min;
    min = mat[0][0];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(min > mat[i][j]){
                min = mat[i][j];
            }
        }
    }
    return min;
}

void zamena_prvog_poslednjeg_reda(int mat[20][20], int n){
    int i, j, pom;
    i = 0;
    for(j = 0; j < n; j++){
        pom = mat[i][j];//pom je prvi red
        mat[i][j] = mat[n - 1][j]; //prvi red ce postati poslednji
        mat[n-1][j] = pom; //poslednji red ce postati pom,a prethodno smo rekli da je pom prvi
    }
}

int main(){

    int mat[20][20], n;
    // suma1, suma2, suma3, max_elem_mat, min_elem_mat;

    printf("Unesi dimenziju matrice n = ");
    scanf("%d", &n);
    if(n>3){
        printf("Matrica ne moze biti vecih dimenizja od 3x3");
        return 1;
    }else{
        unos_matrice(mat, n);
        prikaz_matrice(mat, n);
        ispis_memorijskih_adresa(mat,n);
        }
    
    // suma1 = suma_prvog_reda(mat, n);
    // printf("Suma elemenata prvog reda je %d\n", suma1);
    // suma2 = suma_prve_kolone(mat, n);
    // printf("Suma elemenata prve kolone je %d\n", suma2);
    // suma3 = suma_dijagonale(mat, n);
    // printf("Suma elemenata na glavnoj dijagonali je %d\n", suma3);
    // max_elem_mat = max_element_matrice(mat, n);
    // printf("Maksimalan element matrice je %d\n", max_elem_mat);
    // min_elem_mat = min_element_matrice(mat, n);
    // printf("Minimalni element matrice je %d\n", min_elem_mat);
    // zamena_prvog_poslednjeg_reda(mat, n);
    // prikaz_matrice(mat, n);

    return 0;
}