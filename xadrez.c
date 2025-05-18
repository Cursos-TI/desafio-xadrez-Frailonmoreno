
/*
 * Programa: Simulação de Movimentos de Peças de Xadrez
 * Peças: Torre, Bispo e Rainha
 * Autor: [Seu Nome]
 * Descrição: Este programa simula o movimento de três peças de xadrez
 *            utilizando diferentes estruturas de repetição para cada peça.
 *
 * Requisitos:
 *  - Torre: 5 casas para a direita (estrutura for)
 *  - Bispo: 5 casas na diagonal para cima e à direita (estrutura while)
 *  - Rainha: 8 casas para a esquerda (estrutura do-while)
 */

#include <stdio.h>

int main() {
    // Número de casas para cada movimento
    const int TORRE_PASSOS = 5;
    const int BISPO_PASSOS = 5;
    const int RAINHA_PASSOS = 8;
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;
    printf("...DESAFIO XADREZ!...\n");
    // 1) Movimento da Torre: 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");
    for (int passo = 1; passo <= TORRE_PASSOS; passo++) {
        // A cada iteração, imprime a direção "Direita"
        printf("Direita\n");
    }
    printf("\n");

    // 2) Movimento do Bispo: 5 casas na diagonal (Cima, Direita) usando WHILE
    printf("Movimento do Bispo:\n");
    int passosBispo = 0;
    while (passosBispo < BISPO_PASSOS) {
        // A cada casa na diagonal, imprime "Cima, Direita"
        printf("Cima, Direita\n");
        passosBispo++;
    }
    printf("\n");

    // 3) Movimento da Rainha: 8 casas para a esquerda usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int passosRainha = 0;
    do {
        // A cada iteração, imprime a direção "Esquerda"
        printf("Esquerda\n");
        passosRainha++;
    } while (passosRainha < RAINHA_PASSOS);

    printf("\n");

    // 4) Movimento do Cavalo: formar um "L" (duas casas para baixo e uma para a esquerda)
    printf("Movimento do Cavalo:\n");
    
    // Duas casas para baixo: FOR externo e WHILE interno
    for (int passo = 1; passo <= CAVALO_BAIXO; passo++) {
        int contador = 0;
        while (contador < 1) {
            printf("Baixo\n");
            contador++;
        }
    }
    
    // Uma casa para a esquerda: FOR externo e DO-WHILE interno
    for (int passo = 1; passo <= CAVALO_ESQUERDA; passo++) {
        int contador = 0;
        do {
            printf("Esquerda\n");
            contador++;
        } while (contador < 1);
    }

    return 0;
}

