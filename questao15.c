// 15. O que será mostrado na tela pelo seguinte programa? Justifique sua resposta.

#include <stdio.h>

int main(){
    // Vetor 4x3 (4 linhas e 3 colunas)
    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

// x+3 : Endereço de x[3] 
// *(x+3) : Primeiro elemento da quarta linha, que é 10
// *(x+2)+3 : Rndreço que não corresponde um valor no array
