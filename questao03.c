#include <stdio.h>

int main(){
    int i, j, *p, *q;
    
    p = &i;
    *q = &j; // erro de compilação : ponteiro q incompatível ao endereço de j
    p = &*&i;
    i = (*&)j; // erro de compilação : sintaxe inválida (*&)
    i = *&j; 
    i = *&*&j;
    q = *p; // erro de compilação : tipos incompatíveis
    i = (*p)++ + *q;

    return 0;
}
