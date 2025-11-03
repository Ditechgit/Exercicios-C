#include <stdio.h>

// Função recursiva para movimentar a Torre
// Move a Torre para a direita N vezes
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentar a Rainha
// Move a Rainha para a esquerda N vezes
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo com loops aninhados
// Move o Bispo verticalmente, e em cada passo, horizontalmente

void moverBispoDiagonal(int passos) {
    if (passos <= 0) return;

    // Loop interno para simular o movimento horizontal
    for (int h = 0; h < 1; h++) {
        printf("Cima, ");
    }

    // Movimento vertical
    printf("Direita\n");

    moverBispoDiagonal(passos - 1);
}

// Função com loops complexos para o Cavalo
// Simula movimento em "L": duas casas para cima e uma para a direita
void moverCavalo() {

    int movimentos = 0;

    // Loop externo: controla o movimento vertical (duas vezes "Cima")
    for (int cima = 0; cima < 2; cima++) {
        printf("Cima\n");
        movimentos++;

        // Loop interno: só executa na última iteração vertical
        if (cima == 1) {
            for (int direita = 0; direita < 1; direita++) {
                printf("Direita\n");
                movimentos++;
            }
        }
    }
}

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispoDiagonal = 5;

    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Bispo:\n");
    moverBispoDiagonal(casasBispoDiagonal);


    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}