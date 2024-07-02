#include <stdio.h> // La biblioteca estandar de C para funciones de entrada y salida

int main() {
    int n; // Variable para guardar el numero de filas y columnas de la matriz

    // Leer la dimension de la matriz
    printf("Ingrese el numero de filas y columnas de la matrix(n x n): ");
    scanf("%d", &n);

    int matrix[n][n]; // Declarar una matriz n x n o cuadrada es decir con el mismo numero de filas y columnas
    int identidad[n][n]; // Se utiliza una matriz identidad para calcular la inversa
    int i, j, k;

    // Inicializar la matriz identidad
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            identidad[i][j] = (i == j) ? 1 : 0;
        }
    }

    // Leer los elementos de la matriz
    printf("Ingrese los elementos de la matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("El elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calcular la matriz inversa con el método de Gauss Jordan
    for (i = 0; i < n; i++) {
        // Normalizar la fila i
        int temp = matrix[i][i];
        for (j = 0; j < n; j++) {
            matrix[i][j] /= temp;
            identidad[i][j] /= temp;
        }

        // Eliminación gaussiana para hacer ceros debajo de la diagonal
        for (k = 0; k < n; k++) {
            if (k != i) {
                int ratio = matrix[k][i];
                for (j = 0; j < n; j++) {
                    matrix[k][j] -= ratio * matrix[i][j];
                    identidad[k][j] -= ratio * identidad[i][j];
                }
            }
        }
    }

    // Mostrar la matriz inversa
    printf("\nMatrix Inversa:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", identidad[i][j]);
        }
        printf("\n");
    }

    return 0; //Gracias por utilizar el programa :D
}
