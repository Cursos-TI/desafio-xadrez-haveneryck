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

    // Cavalo será implementado no próximo commit

    return 0;