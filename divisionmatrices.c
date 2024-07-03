#include <stdio.h>//La libreria estandar para funciones de entrada y salida de c

int main() {
    int filas, columnas;
    int matrixA[10][10], matrixB[10][10], matrixResultado[10][10];

    // Se pide al usuario el numero de filas de las matrices
    printf("Ingrese el numero de filas de las matrices: ");
    scanf("%d", &filas);

    // Pedir al usuario el numero de columnas de las matrices
    printf("Ingrese el numero de columnas de las matrices: ");
    scanf("%d", &columnas);

    // Leer los elementos de la matriz A
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el elemento [%d][%d] de la matriz A: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Leer los elementos de la matriz B
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el elemento [%d][%d] de la matrix B: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Realizar la división de las matrices elemento por elemento
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matrixB[i][j] != 0) {
                matrixResultado[i][j] = matrixA[i][j] / matrixB[i][j];
            } else {
                // Manejar la división por cero
                printf("Error: División por cero en el elemento [%d][%d].\n", i, j);
                matrixResultado[i][j] = 0;  // Se asigna un valor por defecto
            }
        }
    }

    // Imprimir la matrix resultado de la división
    printf("La matrix resultado de la división es:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matrixResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
