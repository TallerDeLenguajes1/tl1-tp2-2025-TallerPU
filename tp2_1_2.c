#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>   

#define N 20

int main() {
    int i;
    double vt[N];
    double *ptr;

    srand(time(NULL));

    printf("Llenando el arreglo con %d números double aleatorios (1 a 100) usando punteros:\n", N);

    ptr = vt; // Equivale a ptr = &vt[0];
    for(i = 0; i < N; i++) {
        *ptr = 1 + rand() % 100;
        ptr++;
    }

    printf("Imprimiendo el contenido del arreglo usando punteros:\n");
    ptr = vt;
    for(i = 0; i < N; i++) {
        printf("%.2f \n", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}
