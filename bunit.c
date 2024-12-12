//
// Created by lf843 on 10/12/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main () {
    int matriz [SIZE][SIZE];
    int numero, i, j;

    srand(time(0));
    printf("Matriz 10x10 gerada automaticamente:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matriz[i][j] = rand() %100;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Digite um número: ");
    scanf("%d", &numero);

    for (i = 0; i < SIZE; i++) {
        matriz[i][i] *= numero;
        matriz [i][SIZE - 1 -i] *= (2*numero);

    }
    printf("Matriz após as multiplicações:\n");
    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
