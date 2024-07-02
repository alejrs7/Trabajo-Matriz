#include <stdio.h> // La biblioteca estandar de C para funciones de entrada y salida

int main() {
    int n; // Variable para guardar el numero de filas y columnas de la matriz

    // Leer la dimension de la matriz
    printf("Ingrese el numero de filas y columnas de la matriz: ");
    scanf("%d", &n);

    int matrix[n][n]; // Declaracion de una matriz con una dimension n x n

    // Leer los elementos de la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("El elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Procede a imprimir los elementos impares de la matriz
    printf("Los elementos impares de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 != 0) { // Verificar si el elemento de la matriz es impar
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0; 
}
