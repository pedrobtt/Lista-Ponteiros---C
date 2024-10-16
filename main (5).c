#include <stdio.h>
#include <stdlib.h>

// Função para alocar dinamicamente a matriz tridimensional
int ***aloca_matriz(int altura, int largura, int profundidade) {
    int ***matriz;
    matriz = (int ***)malloc(altura * sizeof(int **)); // Alocação para as "camadas" (altura)

    for (int i = 0; i < altura; i++) {
        matriz[i] = (int **)malloc(largura * sizeof(int *)); // Alocação para cada plano

        for (int j = 0; j < largura; j++) {
            matriz[i][j] = (int *)malloc(profundidade * sizeof(int)); // Alocação para cada linha de cada plano
        }
    }

    return matriz;
}

// Função para liberar a memória alocada para a matriz tridimensional
void libera_matriz(int ***matriz, int altura, int largura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            free(matriz[i][j]); // Libera cada linha
        }
        free(matriz[i]); // Libera cada plano
    }
    free(matriz); // Libera a "altura" (todas as camadas)
}

// Função para modificar o valor de um elemento específico na matriz
void modifica_elemento(int ***matriz, int x, int y, int z, int valor) {
    matriz[x][y][z] = valor; // Modifica o valor na posição especificada
}

// Função para imprimir um plano específico da matriz
void imprime_plano(int ***matriz, int altura, int largura, int profundidade, int plano) {
    printf("Plano %d:\n", plano);
    for (int i = 0; i < largura; i++) {
        for (int j = 0; j < profundidade; j++) {
            printf("%d ", matriz[plano][i][j]); // Imprime os valores do plano
        }
        printf("\n");
    }
}

int main() {
    int altura, largura, profundidade;
    printf("Digite as dimensões da matriz (altura largura profundidade): ");
    scanf("%d %d %d", &altura, &largura, &profundidade);

    // Alocação da matriz tridimensional
    int ***matriz = aloca_matriz(altura, largura, profundidade);

    // Inicializa a matriz com zeros
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                matriz[i][j][k] = 0;
            }
        }
    }

    // Modificação de um elemento (exemplo)
    int x, y, z, valor;
    printf("Digite as coordenadas do elemento a modificar (x y z) e o valor (0 ou 1): ");
    scanf("%d %d %d %d", &x, &y, &z, &valor);
    modifica_elemento(matriz, x, y, z, valor);

    // Impressão de um plano (exemplo)
    int plano;
    printf("Digite o número do plano (0 a %d) para imprimir: ", altura - 1);
    scanf("%d", &plano);
    imprime_plano(matriz, altura, largura, profundidade, plano);

    // Libera a memória alocada
    libera_matriz(matriz, altura, largura);

    return 0;
}
