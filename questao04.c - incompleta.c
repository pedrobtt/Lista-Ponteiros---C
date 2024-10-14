/* 4. Determine o que será mostrado pelo seguinte program nos trechos (a) até (n). Compile-o,
execute-o e verifique se foram obtidas as respostas esperadas. Justifique o porque de cada uma. */

#include <stdio.h>

int main(void) {
	int valor;
	int *p1;
	float temp;
	float *p2;
	char aux;
	char *nome = "Ponteiros";
	char *p3;
	int idade;
	int vetor[3];
	int *p4;
	int *p5;

	/* (a) */
	valor = 10;
	p1 = &valor;
	*p1 = 20;
	printf("%d \n", valor);
	// Retorna: 20
	// Valor é inicialmente 10, mas é atualizado para 20 através do ponteiro p1.

	/* (b) */
	temp = 26.5;
	p2 = &temp;
	*p2 = 29.0;
	printf("%.1f \n", temp);
	// Reetorna: 29.0
	// temp é inicialmente 26.5, mas é atualizado para 29.0 através do ponteiro p2

	/* (c) */
	p3 = &nome[0];
	aux = *p3;
	printf("%c \n", aux);
	// Retorna: P
	// p3 aponta para o início da string "Ponteiros", e aux recebe o primeiro caractere, que é P

	/* (d) */
	p3 = &nome[4];
	aux = *p3;
	printf("%c \n", aux);
	// Retorna: e
	// p3 é atualizado para apontar para o quinto caractere da string (nome[4]), que é e

	/* (e) */
	p3 = nome;
	printf("%c \n", *p3);
	// Retorna: P
	// p3 é reatribuído para apontar para o início de nome, logo *p3 retorna o primeiro caractere, P

	/* (f) */
	p3 = p3 + 4;
	printf("%c \n", *p3);
	// Retorna: e
	// p3 é incrementado em 4, então agora aponta para o quinto caractere da string, que é e

	/* (g) */
	p3--;
	printf("%c \n", *p3);
	// Retorna: o
	// p3 é decrementado para a posição anterior (que agora aponta para nome[3]), e *p3 retorna o

	/* (h) */
	vetor[0] = 31;
	vetor[1] = 45;
	vetor[2] = 27;
	p4 = vetor;
	idade = *p4;
	printf("%d \n", idade);
	// Retorna: 31
	// vetor[0] é definido como 31 e p4 aponta para o início do vetor

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);
	// Retorna: 45
	// p5 é incrementado para o próximo elemento (vetor[1]), que é 45
    
    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);
	// Retorna: 27
	// p4 é ajustado para apontar para vetor[2], que contém 27
    
    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);
	// Retorna: 45
	// p4 é decrementado para vetor[1], que é 45
    
    /* (m) */
    p5 = &vector[2] - 1;
    printf("%d \n", *p5);
	// Retorna: 27
	// p5 é ajustado para apontar para o elemento anterior de vetor[2], que é 27
    
    /* (n) */
    p5++;
    printf("%d \n", *p5);
	// Retorna: 27
	// p5 é incrementado, agora aponta para vetor[2], que contém 27
	
    return(0);
}
