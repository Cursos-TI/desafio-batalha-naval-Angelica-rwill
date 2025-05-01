#include <stdio.h>

#define TAMANHO 10  // Tabuleiro 10x10

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("0 ");  // Representa água
            } else if (tabuleiro[i][j] == 3) {
                printf("3 ");  // Representa navio
            } else if (tabuleiro[i][j] == 5) {
                printf("5 ");  // Representa area afetada pela habilidade
            }
        }
        printf("\n");
    }
}

int main() {
    // Declara o tabuleiro 10x10 e inicializa com 0 (água)
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Posiciona um navio para exemplo
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    // Define a area de efeito para a habilidade em cone
    // Usando uma matriz 5x5 para o cone 
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Definir a posição de origem do cone no tabuleiro
    int origem_x = 5, origem_y = 5;  // Centro do tabuleiro

    // Sobrepondo a habilidade em cone ao tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x = origem_x + i - 2;  // Ajuste para o centro do cone
            int y = origem_y + j - 2;  // Ajuste para o centro do cone

            // Verifica se a posição está dentro dos limites do tabuleiro
            if (x >= 0 && x < TAMANHO && y >= 0 && y < TAMANHO && cone[i][j] == 1) {
                tabuleiro[x][y] = 5;  // Marca a área afetada pela habilidade
            }
        }
    }

    // Exibe o tabuleiro final com a habilidade
    exibirTabuleiro(tabuleiro);

    return 0;
}
