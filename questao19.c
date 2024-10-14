#include <stdio.h>
#include <stdlib.h>

// Função de comparação para o qsort
int compara(const void *a, const void *b) {
    if (*(float *)a > *(float *)b) return 1;
    else if (*(float *)a < *(float *)b) return -1;
    else return 0;
}

int main() {
    int n;
    float *valores;

    // Lê a quantidade de valores
    printf("Digite o número de valores: ");
    scanf("%d", &n);

    // Aloca dinamicamente a memória para armazenar os valores
    valores = (float *)malloc(n * sizeof(float));

    if (valores == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lê os valores do teclado
    printf("Digite os valores:\n");
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    // Ordena os valores em ordem crescente
    qsort(valores, n, sizeof(float), compara);

    // Exibe os valores ordenados
    printf("\nValores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", valores[i]);
    }

    // Libera a memória alocada
    free(valores);

    return 0;
}
