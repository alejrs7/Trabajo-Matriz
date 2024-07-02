#include <stdio.h> // La biblioteca estándar de C para funciones de entrada y salida

int main() {
    int n; // Variable para guardar el numero de filas y columnas de las matrices

    // Leer  la dimension o tamaño de las matrices
    printf("Ingrese el numero de filas y columnas de las matrices (n x n): ");
    scanf("%d", &n);

    int matrix1[n][n]; // Declaracion de la primera matriz n x n
    int matrix2[n][n]; // Declaracion de la segunda matriz n x n
    int resultado[n][n]; // Declaracion de la matriz resultado n x n
    int i, j;

    // Leer los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("El elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Leer los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("El elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calcular la resta de las dos matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            resultado[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Se muestra el resultado de la matriz
    printf("\nResultado de la resta de las matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0; 
}
