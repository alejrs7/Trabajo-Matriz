#include <stdio.h>//La libreria estandar de C que proporciona funciones de entrada y salida 

int main() {
    // Definimos una matriz de ejemplo de 3x3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
  
    // Iteramos es decir repetimos o ejecutamos de ser necesario varias veces el bucle for sobre las filas de la matriz (exceptuando las primeras y últimas filas)
    for (int i = 1; i <= 1; i++) {
        // Iteramos es decir repetimos o ejecutamos de ser necesario varias veces el bucle for sobre las columnas de la matriz (exceptuando las primeras y últimas columnas)
        for (int j = 1; j <= 1; j++) {
            // Imprimir el elemento en la posición i, j de la matriz
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Hacer salto de linea después de imprimir una fila de elementos
    }

    return 0;
}
En este ejercicio el programa presenta los elementos que no sean las esquinas 
