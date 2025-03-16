#include <stdio.h>

// Função recursiva para movimentação da Torre (movendo para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentação do Bispo (movendo diagonal cima-direita)
void moverBispo(int casas, int atual) {
    if (atual == casas) return;
    printf("Cima Direita\n");
    moverBispo(casas, atual + 1);
}

// Função recursiva para movimentação da Rainha (movendo para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimentação do Cavalo utilizando loops aninhados
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) { // Duas casas para cima
            printf("Cima\n");
        }
        printf("Direita\n"); // Uma casa para a direita
    }
}

// Movimentação do Bispo utilizando loops aninhados
void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) { // Controla o movimento horizontal e vertical simultaneamente
            printf("Cima Direita\n");
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");
    
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispo(5, 0);
    printf("\n");
    
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");
    
    printf("Movimento do Cavalo:\n");
    moverCavalo(3);
    printf("\n");
    
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(5);
    
    return 0;
}