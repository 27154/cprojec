//
// Created by lf843 on 12/12/2024.
//
#include <stdio.h>
void trianglevef() {
    float side1, side2, side3;
    printf("Digite as medidas dos lados do triângulo:\n");
    printf("Lado 1:");
    scanf("%f", &side1);
    printf("lado 2:");
    scanf("%f", &side2);
    printf("Lado 3:");
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Triângulo Equilátero: três lados iguais\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Triângulo isóceles: dois lados iguais\n");

    } else {
        printf("Triângulo Escaleno: três lados diferentes\n");
    }

}
int main() {
    int option;
    do {
        printf("Menu\n");
        printf("1. Verificar Triângulo\n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                trianglevef();
            break;
            case 2:
                printf("Saindo...\n");
            break;
            default:
                printf("Opção inválida! Favor tentar novamente\n");
        }

    } while (option  != 2);
    return 0;
}
