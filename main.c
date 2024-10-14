#include <stdio.h>

int main(){
    int i=5, *p;
    p = &i; // supondo que i possui 4094 como endereço
    
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
    
    printf("p = %d bytes\n", sizeof(p));
    printf("p+1 = %d bytes\n", sizeof(p+1));
    printf("*p+2 = %d bytes\n", sizeof(*p+2));
    printf("**&p = %d bytes\n", sizeof(**&p));
    printf("3**p = %d bytes\n", sizeof(3**p));
    printf("**&p+4 = %d bytes\n", sizeof(**&p+4));
    
    // p : retorna o endereço de i
    // p + 1 : retorna o endereço de i + 1
    // *p + 2 : retorna o conteúdo de i + 2    
    // **&p : retorna para o conteúdo de i novamente
    // 3**p : retorna o conteúde de i * 5
    // **&p+4 : retorna para o conteúdo de i novamente + 4
    
    return 0;
}
