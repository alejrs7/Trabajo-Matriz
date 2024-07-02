#include <stdio.h> //  La biblioteca estándar de C para funciones de entrada y salida

int main() {
    int n; // Variable para guardar el numero de filas y columnas de la matriz

    // Leer la dimension de la matriz
    printf("Ingrese el numero de filas y columnas de la matriz (n x n): ");
    scanf("%d", &n);

    int matrix[n][n]; // Declaracion de una matriz n x n
    int transpuesta[n][n]; // Matriz transpuesta
    int i, j;

    // Leer los elementos de la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("El elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Se genera la matriz transpuesta
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpuesta[j][i] = matrix[i][j];
        }
    }

    // Muestra la matriz transpuesta
    printf("\nMatrix Transpuesta:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0; 
}
