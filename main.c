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
