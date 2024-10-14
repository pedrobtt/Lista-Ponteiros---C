#include <stdio.h>

int main(){
    // Vetor 4x3 (4 linhas e 3 colunas)
    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

/*
    x+3: endereço de x[3] 
    *(x+3): primeiro elemento da quarta linha, que é 10
    *(x+2)+3: endreço que não corresponde um valor no array
*/

