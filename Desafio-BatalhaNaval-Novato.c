#include <stdio.h>

int main() {

    printf("***Desafio Batalha Naval - Novato***\n");

    // Declara o tabuleiro 10x10 (10 linhas e 10 colunas)
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona o navio horizontalmente (linha 2, colunas 1 a 3)
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    // Posiciona o navio verticalmente (coluna 5, linhas 4 a 6)
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}