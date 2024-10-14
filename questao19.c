/* 19. Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float do teclado e os apresente em ordem crescente. Utilize alocação dinâmica de memória
para armazenar o conjunto de pontos lidos. */

#include <stdio.h>
#include <stdlib.h>

// Função para ordenar os elementos em ordem crescente (usando bubble sort)
void bubbleSort(float *arr, int n) {
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    float *valores;

    // Solicita ao usuário o número de valores a serem lidos
    printf("Digite o numero de valores a serem inseridos: ");
    scanf("%d", &n);

    // Alocação dinâmica de memória
    valores = (float *)malloc(n * sizeof(float));

    if (valores == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1; // Encerra o programa em caso de erro na alocação
    }

    // Lê os valores do usuário
    printf("Digite os %d valores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Ordena os valores
    bubbleSort(valores, n);

    // Exibe os valores em ordem crescente
    printf("Valores ordenados em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(valores);

    return 0;
}
