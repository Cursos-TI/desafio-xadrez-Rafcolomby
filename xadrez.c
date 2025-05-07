#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
#include <stdio.h>

int main() {
    int i; // Variável de controle para loops

    // ----------------------------
    // Movimento da TORRE
    // ----------------------------
    printf("Movimento da Torre:\n");
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------------------
    // Movimento do BISPO
    // ----------------------------
    printf("Movimento do Bispo:\n");
    int j = 0;
    while(j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ----------------------------
    // Movimento da RAINHA
    // ----------------------------
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while(k < 8);

    printf("\n");

    // ----------------------------
    // Movimento do CAVALO
    // ----------------------------
    // O Cavalo se move em forma de "L":
    // Neste caso: 2 casas para BAIXO e 1 para a ESQUERDA
    // Usamos um FOR externo e um WHILE interno

    printf("Movimento do Cavalo:\n");

    // Loop externo para o movimento principal (pode ser 1 vez só)
    for(int m = 0; m < 1; m++) {
        // Duas casas para baixo
        int n = 0;
        while(n < 2) {
            printf("Baixo\n");
            n++;
        }

        // Uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
