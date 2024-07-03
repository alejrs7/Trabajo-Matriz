#include <stdio.h>//La libreria estandar con funciones de entrada y salida 

int main() {
    // Tamaño máximo de las matrices
    int MAX = 10; // Variable para el tamaño máximo de las matrices

    // Variables para la matriz y su potencia
    int dimension, potencia;
    int matriz[MAX][MAX], resultado[MAX][MAX];

    // Solicitar al usuario la dimensión de la matriz cuadrada
    printf("Ingrese la dimensión de la matriz cuadrada (máximo %d): ", MAX);
    scanf("%d", &dimension);

    // Leer los elementos de la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Solicitar al usuario la potencia a la que desea elevar la matriz
    printf("Ingrese la potencia a la que desea elevar la matriz: ");
    scanf("%d", &potencia);

    // Inicializar la matriz resultado como la matriz identidad
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            resultado[i][j] = (i == j) ? 1 : 0; // Matriz identidad
        }
    }

    // Calcular la potencia de la matriz iterativamente
    while (potencia > 0) {
        if (potencia % 2 == 1) {
            // Multiplicar resultado por matriz
            int temp[MAX][MAX] = {0};
            for (int i = 0; i < dimension; i++) {
                for (int j = 0; j < dimension; j++) {
                    for (int k = 0; k < dimension; k++) {
                        temp[i][j] += resultado[i][k] * matriz[k][j];
                    }
                }
            }
            for (int i = 0; i < dimension; i++) {
                for (int j = 0; j < dimension; j++) {
                    resultado[i][j] = temp[i][j];
                }
            }
        }
        // Elevar la matriz al cuadrado
        int temp[MAX][MAX] = {0};
        for (int i = 0; i < dimension; i++) {
            for (int j = 0; j < dimension; j++) {
                for (int k = 0; k < dimension; k++) {
                    temp[i][j] += matriz[i][k] * matriz[k][j];
                }
            }
        }
        for (int i = 0; i < dimension; i++) {
            for (int j = 0; j < dimension; j++) {
                matriz[i][j] = temp[i][j];
            }
        }
        potencia /= 2;
    }

    // Imprimir la matriz resultado elevada a la potencia indicada
    printf("La matriz resultado elevada a la potencia %d es:\n", potencia);
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
