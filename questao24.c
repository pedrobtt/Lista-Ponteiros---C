/* 24. Crie uma função capaz de realizar multiplicação matricial da forma C = AxB. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal.
Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3 e 3x4, respectivamente (o
resultado deve ficar armazenado em C). */

#include <stdio.h>
#include <stdlib.h>

// Função que realiza a multiplicação de matrizes
void multiplica_matrizes(int *A, int *B, int *C, int lin_A, int col_A, int col_B) {
    for (int i = 0; i < lin_A; i++) {
        for (int j = 0; j < col_B; j++) {
            C[i * col_B + j] = 0; // Inicializa elemento C[i][j]
            for (int k = 0; k < col_A; k++) {
                C[i * col_B + j] += A[i * col_A + k] * B[k * col_B + j];
            }
        }
    }
}

int main() {
    int lin_A, col_A, col_B;

    // Leitura das dimensões das matrizes
    printf("Digite o número de linhas e colunas da matriz A: ");
    scanf("%d %d", &lin_A, &col_A);

    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &col_B);

    // Aloca dinamicamente as matrizes A, B e C
    int *A = (int *)malloc(lin_A * col_A * sizeof(int));
    int *B = (int *)malloc(col_A * col_B * sizeof(int));
    int *C = (int *)malloc(lin_A * col_B * sizeof(int));

    if (A == NULL || B == NULL || C == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Leitura dos elementos da matriz A
    printf("Digite os elementos da matriz A (%d elementos):\n", lin_A * col_A);
    for (int i = 0; i < lin_A * col_A; i++) {
        scanf("%d", &A[i]);
    }

    // Leitura dos elementos da matriz B
    printf("Digite os elementos da matriz B (%d elementos):\n", col_A * col_B);
    for (int i = 0; i < col_A * col_B; i++) {
        scanf("%d", &B[i]);
    }

    // Chama a função de multiplicação de matrizes
    multiplica_matrizes(A, B, C, lin_A, col_A, col_B);

    // Exibe as matrizes A, B e o resultado C
    printf("\nMatriz A:\n");
    for (int i = 0; i < lin_A; i++) {
        for (int j = 0; j < col_A; j++) {
            printf("%d ", A[i * col_A + j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < col_A; i++) {
        for (int j = 0; j < col_B; j++) {
            printf("%d ", B[i * col_B + j]);
        }
        printf("\n");
    }

    printf("\nMatriz C (resultado):\n");
    for (int i = 0; i < lin_A; i++) {
        for (int j = 0; j < col_B; j++) {
            printf("%d ", C[i * col_B + j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    free(A);
    free(B);
    free(C);

    return 0;
}
