#include <stdio.h>

// Constantes para número de movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_CAVALO_VERTICAL 2
#define MOV_CAVALO_HORIZONTAL 1

int main() {
    // Movimentação do Bispo: Diagonal superior direita (Cima + Direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimentação da Torre:\n");
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    // Movimentação do Cavalo: L para baixo e esquerda (loops aninhados)
    printf("\nMovimentação do Cavalo:\n");
    for (int l = 0; l < MOV_CAVALO_VERTICAL; l++) {
        printf("Baixo\n");

        int m = 0;
        while (m < MOV_CAVALO_HORIZONTAL) {
            printf("Esquerda\n");
            m++;
        }

        printf("---\n"); // Separador visual entre movimentos em L
    }

    return 0;
}