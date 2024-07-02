#include <stdio.h>//La libreria estandar de C con las funciones para tanto de entrada como salida 

int main() {
    // Definir una matriz en este caso de 3x3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Iteramos ejecutamos el bucle for cuantas veces sea necesaria sobre las filas de la matriz (exceptuando las primeras y últimas filas)
    for (int i = 1; i <= 1; i++) {
        // Iteramos ejecutamos el bucle for cuantas veces sea necesaria sobre las columnas de la matriz (exceptuando las primeras y últimas columnas)
        for (int j = 1; j <= 1; j++) {
            // Imprimimos el elemento en la posición i, j de la matriz
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Realizamos un salto de linea despues de imprimir una fila de elementos
    }

    return 0;
}
