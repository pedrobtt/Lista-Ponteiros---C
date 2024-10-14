#include <stdio.h>

int f(int a, int *pb, int **ppc){
    int b, c;
    **ppc += 1;  // Incrementa o valor apontado por ppc
    c = **ppc;   // Atribui o novo valor de **ppc a c
    *pb += 2;    // Incrementa o valor apontado por pb
    b = *pb;     // Atribui o novo valor de *pb a b
    a += 3;      // Incrementa a por 3
    return a + b + c; // Retorna a + b + c
}

void main(){
    int c, *b, **a;
    c = 5;        // c é inicializado como 5
    b = &c;      // b é um ponteiro que aponta para endereço c
    a = &b;      // a é um ponteiro que aponta para endereço b
    printf("%d\n", f(c, b, a)); // Chama f com c, b, a
    getchar();
}

/*
    A chamada da função global no printf na função main irá retorna 8 (a) + 8 (b) + 6 (c) = 22
*/