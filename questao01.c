// 1. Seja o seguinte trecho de programa:

#include <stdio.h>

int main(){
    int i=3, j=5;
    int *p, *q;
    
    p = &i;
    q = &j;
    
    if(p == &i){
        printf("1\n"); // O conteúdo de p é igual ao endereço de i
    }else{
        printf("0\n");
    }
    
    printf("*p - *q = %d\n", *p - *q); // Retorna -2 devido aos ponteiros p e q resultarem na operação do conteúdo de i e j
    
    printf("**&p = %d\n", **&p); // Retorna o conteúdo de i devido a aplicação de ponteiros seguidos
    
    printf("3 - *p/(*q) + 7 = %d", 3 - *p/(*q) + 7);
    
    return 0;
}
