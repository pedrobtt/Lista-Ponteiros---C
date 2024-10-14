/* 9. Considerando a declaração
int mat[4], *p, x;
quais das seguintes expressões são válidas? Justifique. */

#include <stdio.h>

int main(){
    int mat[4], *p, x;
    
    p = mat + 1; // Válido: aponta para o endereço do array + 1 (&mat[1])
    p = mat; // Válido: aponta para o endereço do array (&mat[0])
    p = mat; // Válido: aponta para o endereço do array (&mat[0])
    x = (*mat); // Válido: desreferencia o ponteiro e x retorna o valor de mat[0]

    return 0;
}
