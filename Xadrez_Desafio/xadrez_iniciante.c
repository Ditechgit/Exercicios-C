#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 0, rainha = 0;

    printf("\n");
    // Implementação de Movimentação do Bispo
    //Move Bispo 5 casas para a diagonal direita ^>
    for (int i = 0; i < 5; i++){
        printf("Cima, Direita\n"); //imprime 5 vezes a direção da peça
    }

    printf("\n");
    // Implementação de Movimentação da Torre
    //Mover a Torre 5 casas para direita >
    for (int i = 0; i < 5; i++){
        printf("Direita \n"); //imprime 5 vezes a direção da peça
    }

    printf("\n");
    // Implementação de Movimentação da Rainha
    // Move Rainha 8 casas para esquerda <
    do{
        printf("Esquerda\n");//imprime 8 vezes a direção da peça

        rainha++;
    }while(rainha < 8);

    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Move o cavalo duas casas para baixo e uma para esquerda
    int i,j = 1;
    for (int i = 1; i <= 1; i++){

    // Enquanto j for menor ou igual dois que nesse caso o valor dele é 1, ele vai voltar e imprimir novamente depois ele sai do while e imprime oque esta no for
       while (j <= 2){ 
        printf("Baixo, ");
        j++;
       }
        printf("Esquerda\n");
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
