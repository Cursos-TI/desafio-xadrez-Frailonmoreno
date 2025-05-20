#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_NUMEROS 15
#define LIMITE_SUPERIOR 25

// Função para embaralhar os números de 1 a 25
void embaralhar(int *vetor, int tamanho) {
    for (int i = tamanho - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
}

// Função de comparação para qsort (ordem crescente)
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Gera e imprime 15 números únicos em ordem crescente
void gerarNumeros() {
    int numeros[LIMITE_SUPERIOR];
    int selecionados[TOTAL_NUMEROS];

    // Preenche vetor com números de 1 a 25
    for (int i = 0; i < LIMITE_SUPERIOR; i++) {
        numeros[i] = i + 1;
    }

    // Embaralha o vetor
    embaralhar(numeros, LIMITE_SUPERIOR);

    // Seleciona os 15 primeiros
    for (int i = 0; i < TOTAL_NUMEROS; i++) {
        selecionados[i] = numeros[i];
    }

    // Ordena os 15 números selecionados
    qsort(selecionados, TOTAL_NUMEROS, sizeof(int), comparar);

    // Imprime os números
    printf("Numeros gerados: ");
    for (int i = 0; i < TOTAL_NUMEROS; i++) {
        printf("%2d ", selecionados[i]);
    }
    printf("\n");
}

int main() {
    char tecla;

    srand(time(NULL));

    printf("Pressione ENTER para gerar 15 numeros aleatorios e unicos (1 a 25), em ordem crescente.\n");
    printf("Digite qualquer outra tecla + ENTER para sair.\n");

    while (1) {
        tecla = getchar();
        if (tecla == '\n') {
            gerarNumeros();
        } else {
            break;
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}








    




