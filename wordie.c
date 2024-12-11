#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>

#define cls system("cls");

void gotoYX(int x, int y) {
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void cores(int l, int f) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), l + (f << 4));
}

void visualizacao(const char* viz) {
    int i;
    cores(15, 0);
    for (i = 0; viz[i] != '\0'; i++) {
        printf("%c ", viz[i]);
    }
    printf("\n\n");
}

int main() {
    do {
        char secreta[21], resposta[21], pista[21];
        char letra;
        int erros = 0, acertos = 0, max, i;
        int flag;

        setlocale(LC_ALL, "Portuguese");
        cores(14, 0);
        printf("************ Jogo da Forca ************\n");
        printf("************** Jogador 1 **************\n\n");
        printf("Máximo de 20 letras\n\n");
        printf("Digite a palavra secreta: ");
        scanf("%20s", secreta);
        printf("Uma Pista: ");
        scanf("%20s", pista);
        max = strlen(secreta);
        memset(resposta, '_', max);
        resposta[max] = '\0';
        cls
        printf("************ Jogo da Forca ************\n");
        printf("************** Jogador 2 **************\n\n");
        printf("Limite de 6 erros. Palavra de até 20 letras\n\n");
        cls
        cores(12, 14);
        printf("\n\t  Pista -> ( %s )   \n", pista);
        Sleep(3000);
        while (erros < 6) {
            cores(11, 0);
            cls
            gotoYX(60, 6);
            printf("Acertos = %d\n", acertos);
            gotoYX(60, 5);
            printf("Erros   = %d\n", erros);
            visualizacao(resposta);
            printf("Digite uma letra: ");
            letra = getch();
            flag = 0;
            for (i = 0; i < max; ++i) {
                if (toupper(secreta[i]) == toupper(letra)) {
                    flag = 1;
                    secreta[i] = '_';
                    resposta[i] = letra;
                    ++acertos;
                }
            }
            if (!flag) {
                ++erros;
            }
            if (acertos == max) {
                cls
                printf("\n\n\n");
                visualizacao(resposta);
                cores(12, 15);
                Beep(1500, 250);
                printf("\n\n  Acertou Todas As Letras em %d Tentativas . . . !  \n\n", (erros + acertos));
                break;
            } else if (erros == 6) {
                cores(15, 12);
                printf("\n\nAcertos: %d - Erros: %d\n\n\n", acertos, erros);
                Sleep(3000);
                break;
            }
        }
        gotoYX(60, 6);
        cores(7, 0);
        printf("Acertos = %d\n", acertos);
        gotoYX(60, 5);
        printf("Erros   = %d\n", erros);
        gotoYX(20, 15);
        printf("Jogar Novamente S/N \n");
    } while (toupper((char)getch()) != 'N');
    printf("\n\n\n");
    return 32768;
}