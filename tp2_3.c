#include <stdio.h>  // Necesario para printf
#include <stdlib.h> // Necesario para rand(), srand()
#include <time.h>   // Necesario para time() para la semilla aleatoria

// Define las dimensiones de la matriz
#define N 5 // Número de filas
#define M 7 // Número de columnas

int main() {
    // Declara los índices para los bucles
    int i, k; // 'i' para filas, 'k' para columnas
    // Declara la matriz de enteros
    int mt[N][M];
    // Ya no se necesita el puntero 'ptr'

    // Inicializa el generador de números aleatorios
    srand(time(NULL));

    printf("Generando y mostrando una matriz de %d x %d con números aleatorios (1 a 100) usando punteros directamente:\n", N, M);

    // --- Llenado de la matriz usando punteros directamente ---
    // Bucle externo para recorrer las filas (i)
    for(i = 0; i < N; i++) {
        // Bucle interno para recorrer las columnas (k) de la fila actual
        for(k = 0; k < M; k++) {
            // Accede y asigna el valor directamente usando aritmética de punteros:
            // mt + i: Dirección de la fila i
            // *(mt + i): Dirección del primer elemento de la fila i
            // *(mt + i) + k: Dirección del k-ésimo elemento de la fila i
            // *(*(mt + i) + k): Valor en la posición [i][k]
            *(*(mt + i) + k) = 1 + rand() % 100;
        }
    }

    printf("\nImprimiendo la matriz usando punteros directamente:\n");

    // --- Impresión de la matriz usando punteros directamente ---
    // Bucle externo para recorrer las filas (i)
    for(i = 0; i < N; i++) {
        // Bucle interno para recorrer las columnas (k) de la fila actual
        for(k = 0; k < M; k++) {
            // Imprime el valor en la posición [i][k] accediendo directamente
            // con la misma lógica de punteros que en el llenado.
            printf("%2d\t", *(*(mt + i) + k));
        }
        // Al final de cada fila, imprime una nueva línea
        printf("\n");
    }

    // Indica que el programa terminó exitosamente
    return 0;
}