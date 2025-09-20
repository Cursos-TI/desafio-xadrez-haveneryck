#include <stdio.h>

// Constantes para número de movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_CAVALO_VERTICAL 2
#define MOV_CAVALO_HORIZONTAL 1

// Função recursiva para movimentar o Bispo
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para movimentar a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Movimentação do Bispo com recursão
    printf("Movimentação do Bispo:\n");
    moverBispo(MOV_BISPO);

    // Movimentação da Torre com recursão
    printf("\nMovimentação da Torre:\n");
    moverTorre(MOV_TORRE);

    // Movimentação da Rainha com recursão
    printf("\nMovimentação da Rainha:\n");
    moverRainha(MOV_RAINHA);

    // Movimentação do Cavalo: L para cima e direita
    printf("\nMovimentação do Cavalo:\n");

    for (int i = 0; i < 3; i++) { // simula tentativas de movimento
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                continue; // evita movimentos diagonais
            }

            if (i + j > 3) {
                break; // evita movimentos fora do padrão
            }

            // Movimento em L: 2 para cima, 1 para direita
            for (int k = 0; k < i; k++) {
                printf("Cima\n");
            }
            for (int l = 0; l < j; l++) {
                printf("Direita\n");
            }

            printf("---\n"); // separador visual
        }
    }

    return 0;