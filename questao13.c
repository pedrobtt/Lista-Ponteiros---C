#include <stdio.h>

int main() {
    // Declaração dos vetores
    char c[4]; // Char: 1 byte
    int i[4]; // Int: 2 bytes
    float f[4]; // Float: 4 bytes
    double d[4]; // Double: 8 bytes

    // Endereço inicial
    printf("Endereço de c: %p\n", (void*)c); // Apontando para o endereço da variável char
    printf("Endereço de i: %p\n", (void*)i); // Apontando para o endereço da variável int
    printf("Endereço de f: %p\n", (void*)f); // Apontando para o endereço da variável float
    printf("Endereço de d: %p\n", (void*)d); // Apontando para o endereço da variável double

    // Cálculo dos endereços
    printf("Endereços de c: %p, %p, %p, %p\n", (void*)(c + 1), (void*)(c + 2), (void*)(c + 3)); 
    printf("Endereços de i: %p, %p, %p, %p\n", (void*)(i + 1), (void*)(i + 2), (void*)(i + 3));  
    printf("Endereços de f: %p, %p, %p, %p\n", (void*)(f + 1), (void*)(f + 2), (void*)(f + 3)); 
    printf("Endereços de d: %p, %p, %p, %p\n", (void*)(d + 1), (void*)(d + 2), (void*)(d + 3)); 
    
    /*
    Linha 17 a 20: endereço das variáveis somado por 1, 2, 3 e multiplicado pela quantidade
    de bytes em cada tipo de variável 
    */

    return 0;
}
