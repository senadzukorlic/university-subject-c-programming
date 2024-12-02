
#include <stdio.h>

void prikaz_matrice(int mat[20][20], int n){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void unos_matrice(int mat[20][20], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("mat[%d][%d] = ", i,j);
            scanf("%d", &mat[i][j]);
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
            if(max < mat[i][j]){
                max = mat[i][j];
            }
        }
    }
    return max;
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
        pom = mat[i][j];
        mat[i][j] = mat[n - 1][j];
        mat[n-1][j] = pom;
    }
}

int main(){

    int mat[20][20], n, suma1, suma2, suma3, max_elem_mat, min_elem_mat;

    printf("Unesi dimenziju matrice n = ");
    scanf("%d", &n);
    unos_matrice(mat, n);
    prikaz_matrice(mat, n);
    suma1 = suma_prvog_reda(mat, n);
    printf("Suma elemenata prvog reda je %d\n", suma1);
    suma2 = suma_prve_kolone(mat, n);
    printf("Suma elemenata prve kolone je %d\n", suma2);
    suma3 = suma_dijagonale(mat, n);
    printf("Suma elemenata na glavnoj dijagonali je %d\n", suma3);
    max_elem_mat = max_element_matrice(mat, n);
    printf("Maksimalan element matrice je %d\n", max_elem_mat);
    min_elem_mat = min_element_matrice(mat, n);
    printf("Minimalni element matrice je %d\n", min_elem_mat);
    zamena_prvog_poslednjeg_reda(mat, n);
    prikaz_matrice(mat, n);

    return 0;
}