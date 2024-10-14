// 12. Qual será a saída do seguinte programa

#include <stdio.h>

void main(){
    int const *x = 3; // Isso é incorreto
    printf("%d", ++(*x)); // Isso também causará erro
    
    /*
        1º Erro: atribuir o valor 3 para um ponteiro. 
        2º Erro: incrementar uma variável constante.
    */
}
