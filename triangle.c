//
// Created by lf843 on 11/12/2024.
//
#include <stdio.h>
int trianglear(int base, int height) {
    int area = (base * height)/2;
    return area;
}

void trianglevef() {
float side1, side2, side3;
    printf("Digite as medidas dos lados do triângulo\n");
    printf("Lado 1:");
    scanf("%f", &side1);
    printf("Lado 2:");
    scanf("%f", &side2);
    printf("Lado 3:");
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Triângulo Equilátero: três lados iguais\n");

    }else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Triângulo Isóceles: dois lados iguais\n");
    } else {
        printf("Triângulo Escaleno:três lados diferentes");
    }

}
int main() {

    int option;
    do {
        printf("Menu\n");
        printf("1.Calcular Área do triângulo\n");
        printf("2. Verificar tipo de Triângulo\n");
        printf("3. Sair\n");
        scanf("%d", &option);

        switch (option) {

            case 1: {
                int b, h, a;
                printf("Base: ");
                fflush(stdout);
                scanf("%d", &b);

                printf("Height: ");
                fflush(stdout);
                scanf("%d", &h);

                a = trianglear(b, h);
                printf("A área é %d\n", a);
                break;
            }
            case 2:
                trianglevef();
            break;
            case 3:
                printf("Adeus!\n");
            break;
            default:
                printf("Opção inválida, tente novamente\n");
        }
    }while (option !=3);
    return 0;
}