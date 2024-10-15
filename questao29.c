/* 29. Um usuário precisa implementar o controle de uma matriz de leds com 8 x 8 elementos. Para
isso, ele criou um programa em C dotado de uma matriz da forma

unsigned char m[8][8];

para armazenar os estados dos leds. Como existem apenas dois estados possíveis para os leds
(aceso ou apagado), ele assumiu que leds acessos () seriam denotados pelo inteiro "1" nessa
matriz e leds apagados () seriam denotados pelo inteiro "0". Por exemplo, para a seguinte
matriz de leds:

a matriz m seria codificada da seguinte forma:

Ocorre que a função que controla os leds exige que a informação que controla a matriz seja
enviada via porta serial usando uma função que recebe um único inteiro não sinalizado de
64 bits, da forma send(unsigned long estado). Nesse inteiro, os bytes mais significativos deverão
guardar os estados das linhas iniciais da matriz de leds, enquanto os bytes menos significativos
devem guardar os estados das linhas finais da matriz. Assim, é necessário que cada estado
previsto na matriz m seja codificado em um bit correspondente na variável enviada pela função.

Para a matriz acima, a variável de 64 bits enviada pela função send() deveria ser codificada da
seguinte forma:

0101010110101010010101011010101001010101101010101010101010101010
    
Crie um programa em linguagem C para realizar essa codificação e explique na forma de
comentários como sua codificação da matriz m na variável de 64 bits foi realizada. */

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
    }
    
    // Variável de 64 bits para armazenar o estado da mat
    unsigned long estado = 0;
    
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
