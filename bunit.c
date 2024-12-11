//
// Created by lf843 on 10/12/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int matrix() {
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

#define INCHES_PER_POUND 166

int box() {
    int height, length, width, volume, weight;
    printf("Enter height of box:  ");
    scanf("%d", &height);
    printf("Enter the length of the box:  ");
    scanf("%d", &length);
    printf("Enter the width of box:  ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume +165)/ INCHES_PER_POUND;

    printf("Volume(cubic inches): %d\n", volume);
    printf("Dimensional Weight %d\n", weight);

    return 0;
}