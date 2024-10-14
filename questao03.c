/* 3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
atribuição produzem erro de compilação? Justifique. */

#include <stdio.h>

int main(){
    int i, j, *p, *q;
    
    p = &i;
    *q = &j; // Erro de compilação : ponteiro q incompatível ao endereço de j
    p = &*&i;
    i = (*&)j; // Erro de compilação : sintaxe inválida (*&)
    i = *&j; 
    i = *&*&j;
    q = *p; // Erro de compilação : tipos incompatíveis
    i = (*p)++ + *q;

    return 0;
}
