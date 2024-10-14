#include <stdio.h>

int main(){
    int mat[4], *p, x;
    
    p = mat + 1; // válido: aponta para o endereço do array + 1 (&mat[1])
    p = mat; // válido: aponta para o endereço do array (&mat[0])
    p = mat; // válido: aponta para o endereço do array (&mat[0])
    x = (*mat); // válido: desreferencia o ponteiro e x retorna o valor de mat[0]

    return 0;
}
