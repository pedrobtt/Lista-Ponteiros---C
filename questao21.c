#include <stdio.h>
#include <stdlib.h>

// Fun��o de compara��o para ordem crescente
int comparaCrescente(const void *a, const void *b) {
    int valor1 = *(int *)a;
    int valor2 = *(int *)b;
    return (valor1 - valor2); // Retorna negativo se valor1 < valor2, 0 se forem iguais, positivo se valor1 > valor2
}

// Fun��o de compara��o para ordem decrescente
int comparaDecrescente(const void *a, const void *b) {
    int valor1 = *(int *)a;
    int valor2 = *(int *)b;
    return (valor2 - valor1); // Retorna negativo se valor2 < valor1 (invertido)
}

// Fun��o de ordena��o gen�rica semelhante ao qsort
void minhaSort(void *base, size_t num, size_t size, int (*compar)(const void *, const void *)) {
    char *arr = (char *)base;
    char temp[size];
    for (size_t i = 0; i < num - 1; i++) {
        for (size_t j = 0; j < num - 1 - i; j++) {
            // Comparando os elementos adjacentes usando a fun��o de compara��o
            if (compar(arr + j * size, arr + (j + 1) * size) > 0) {
                // Troca os elementos se estiverem fora de ordem
                memcpy(temp, arr + j * size, size);
                memcpy(arr + j * size, arr + (j + 1) * size, size);
                memcpy(arr + (j + 1) * size, temp, size);
            }
        }
    }
}

int main() {
    int n;

    // Solicita o n�mero de elementos a serem ordenados
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int *valores = (int *)malloc(n * sizeof(int));
    if (valores == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // L� os valores do usu�rio
    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    // Pergunta ao usu�rio o tipo de ordena��o
    int opcao;
    printf("Escolha a ordem de ordenacao: 1 para crescente, 2 para decrescente: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Ordena em ordem crescente
        minhaSort(valores, n, sizeof(int), comparaCrescente);
    } else if (opcao == 2) {
        // Ordena em ordem decrescente
        minhaSort(valores, n, sizeof(int), comparaDecrescente);
    } else {
        printf("Opcao invalida.\n");
        free(valores);
        return 1;
    }

    // Exibe os valores ordenados
    printf("Valores ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // Libera a mem�ria alocada
    free(valores);

    return 0;
}
