#include <stdio.h>

// Definindo uma função que soma dois inteiros
int somar(int a, int b) {
    return a + b;
}

// Definindo uma função que subtrai dois inteiros
int subtrair(int a, int b) {
    return a - b;
}

// Função que recebe um ponteiro para uma função e dois inteiros
int calcular(int (*operacao)(int, int), int x, int y) {
    return operacao(x, y); // Chama a função apontada por operacao
}

int main() {
    int a = 5, b = 3;

    // Usando o ponteiro para a função somar
    int resultadoSoma = calcular(somar, a, b);
    printf("Soma: %d\n", resultadoSoma); // Imprime: Soma: 8

    // Usando o ponteiro para a função subtrair
    int resultadoSubtracao = calcular(subtrair, a, b);
    printf("Subtração: %d\n", resultadoSubtracao); // Imprime: Subtração: 2

    return 0;
}
