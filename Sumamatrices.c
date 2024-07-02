#include <stdio.h>//La libreria estandar de C para funciones de entrada y salida 

int main() {
    int n; // Variable que almacenan el numero de filas y columnas de las matrices

    // Leer la dimension o tamaño de las matrices
    printf("Ingrese el numero de filas y columnas de la matriz: ");
    scanf("%d", &n);

    // Se declaran las matrices
    int matrix1[n][n];
    int matrix2[n][n];
    int resultado[n][n];

    // Leer la primera matriz que ingrese el usuario
    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("El elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Leer la segunda matriz del usuario
    printf("Ingrese los elementos de la segunda matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("El elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Realizar la suma correspondiente de las matrices
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Imprimir el resultado de la suma
    printf("Suma de matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
