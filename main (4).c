#include <stdio.h>

void send(unsigned long estado) {
    // Esta função enviaria o valor via porta serial
    // Aqui apenas imprimimos o valor para fins de teste
    printf("Valor codificado: %lx\n", estado);
}

int main() {
    // Matriz de LEDs (aceso = 1, apagado = 0)
    unsigned char m[8][8] = {
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0}
    };

    unsigned long estado = 0; // Variável de 64 bits para armazenar o estado da matriz

    // Itera sobre a matriz e desloca os bits para formar o número de 64 bits
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            estado = (estado << 1) | m[i][j];
        }
    }

    // Envia o estado codificado de 64 bits
    send(estado);

    return 0;
}

/* Essa abordagem garante que cada LED seja representado por um único bit no inteiro de 64 
bits e que as linhas mais altas da matriz ocupem os bits mais significativos no número final */
