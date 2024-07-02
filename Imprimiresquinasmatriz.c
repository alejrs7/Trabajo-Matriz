#include<stdio.h> //Libreria estandar de C para utilizar funciones de entrada y salida

int main() {
int n; //Variable con la que se almacena el numero filas y columnas

printf("Ingrese el numero de filas y columnas de la matriz");//Pide al usuario ingresar la dimension de la matriz
scanf("%d", &n); //Lee la dimension ingresada por el usuario y lo almacena en la varaiable n
int matrix [n][n];

printf("Ingrese los elementos de la matriz:\n");
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        printf(" El elemento [%d][%d]: ", i + 1, j + 1);
        scanf("%d", &matrix[i][j]);
    }
}
printf("Los elementos de las esquinas:\n");
printf("%d ", matrix[0][0]); // La esquina superior izquierda
printf("%d\n", matrix[0][n-1]); //La esquina superior derecha
printf("%d ", matrix[n-1][0]); // La esquina inferior izquierda
printf("%d\n", matrix[n-1][n-1]); //La esquina inferior derecha
return 0;//Se que escribe matriz pero,para darle distintivo le puse asi :D
}
En este ejercicio podemos ver como se presenta los elementos de las esquinas de la matriz utilizando las funciones basicas de C 
