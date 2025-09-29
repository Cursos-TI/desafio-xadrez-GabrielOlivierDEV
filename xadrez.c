#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre_numeroCasas = 0;
    int bispo_numeroCasas = 0;
    int rainha_numeroCasas = 0;
    int cavalo_numeroCasas = 0;

    // Implementação de Movimentação do Bispo
    // O bispo só pode se mover em diagonais, logo mostramos apenas essas direções.

    do {
        printf("\nBispo: Cima, Direita\n");
        bispo_numeroCasas++;
    } while (bispo_numeroCasas < 5);


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    while (torre_numeroCasas < 5) {
        printf("\nTorre: Direita\n");
        torre_numeroCasas++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    for (rainha_numeroCasas; rainha_numeroCasas < 8; rainha_numeroCasas++) {
        printf("\nRainha: Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Loop externo: vertical
    for (cavalo_numeroCasas; cavalo_numeroCasas < 2; cavalo_numeroCasas++) {
        printf("\nCavalo: Baixo\n");

        // Loop interno: horizontal, roda apenas 1 vez
        int j = 0;
        do {
            if (cavalo_numeroCasas == 1) { // garante que só rode no final do L
                printf("\nCavalo: Esquerda\n");
            }
            j++;
        } while (j < 1);
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
