#include <stdio.h>

int main() {
    printf("***Desafio Batalha Naval - Intermediário***\n\n");

    // Declara o tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona o primeiro navio horizontalmente (linha 2, colunas 1 a 3)
    if (1 >= 0 && 3 < 10) {
        if (tabuleiro[2][1] == 0 && tabuleiro[2][2] == 0 && tabuleiro[2][3] == 0) {
            tabuleiro[2][1] = 3;
            tabuleiro[2][2] = 3;
            tabuleiro[2][3] = 3;
        }
    }

    // Posiciona o segundo navio verticalmente (coluna 5, linhas 4 a 6)
    if (4 >= 0 && 6 < 10) {
        if (tabuleiro[4][5] == 0 && tabuleiro[5][5] == 0 && tabuleiro[6][5] == 0) {
            tabuleiro[4][5] = 3;
            tabuleiro[5][5] = 3;
            tabuleiro[6][5] = 3;
        }
    }

    // Posiciona navio diagonal começando em (0,0)
    if (2 < 10) {
        if (tabuleiro[0][0] == 0 && tabuleiro[1][1] == 0 && tabuleiro[2][2] == 0) {
            tabuleiro[0][0] = 3;
            tabuleiro[1][1] = 3;
            tabuleiro[2][2] = 3;
        }
    }

    // Posiciona navio diagonal começando em (0,9)
    if (2 < 10 && 7 >= 0) {
        if (tabuleiro[0][9] == 0 && tabuleiro[1][8] == 0 && tabuleiro[2][7] == 0) {
            tabuleiro[0][9] = 3;
            tabuleiro[1][8] = 3;
            tabuleiro[2][7] = 3;
        }
    }

    // Exibe o tabuleiro completo no console
    printf("\nTabuleiro Final:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
