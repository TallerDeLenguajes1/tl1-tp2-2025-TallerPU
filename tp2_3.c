#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>   

#define N 5 
#define M 7 

int main() {
    int i, j;
    int mt[N][M];

    srand(time(NULL));

    printf("Generando y mostrando una matriz de %d x %d con números aleatorios (1 a 100):\n", N, M);

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            mt[i][j] = 1 + rand() % 100;
            printf("%2d\t", mt[i][j]);
        }
        printf("\n");
    }
   return 0;
}