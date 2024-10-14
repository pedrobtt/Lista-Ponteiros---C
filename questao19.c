#include <stdio.h>
#include <stdlib.h>

// Fun��o de compara��o para o qsort
int compara(const void *a, const void *b) {
    if (*(float *)a > *(float *)b) return 1;
    else if (*(float *)a < *(float *)b) return -1;
    else return 0;
}

int main() {
    int n;
    float *valores;

    // L� a quantidade de valores
    printf("Digite o n�mero de valores: ");
    scanf("%d", &n);

    // Aloca dinamicamente a mem�ria para armazenar os valores
    valores = (float *)malloc(n * sizeof(float));

    if (valores == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // L� os valores do teclado
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

    // Libera a mem�ria alocada
    free(valores);

    return 0;
}
