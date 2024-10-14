#include <stdio.h>
#include <stdlib.h>

// Fun��o para ordenar os elementos em ordem crescente (usando bubble sort)
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

    // Solicita ao usu�rio o n�mero de valores a serem lidos
    printf("Digite o numero de valores a serem inseridos: ");
    scanf("%d", &n);

    // Aloca��o din�mica de mem�ria
    valores = (float *)malloc(n * sizeof(float));

    if (valores == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1; // Encerra o programa em caso de erro na aloca��o
    }

    // L� os valores do usu�rio
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

    // Libera a mem�ria alocada
    free(valores);

    return 0;
}
