/* 11. Um programador pretendia armazenar em um struct (acessível através de um ponteiro) o nome
de um usuário e um valor inteiro associado e preparou o seguinte programa. Há algum erro
presente no código? Se sim, qual é ele e como pode ser corrigido? */

/*
struct teste{
  int x = 3; // Não permitido
  char nome[] = "jose"; // Não permitido
};
main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->nome);
}
*/

// O erro está em inicializar valores dentro da struct

// Corrigindo o código, temos:

#include <stdio.h>
#include <string.h>

struct teste {
    int x;
    char nome[20];
};

int main() {
    struct teste s; // Declare uma variável, não um ponteiro, ou use malloc
    s.x = 3; // Inicialize os valores
    strcpy(s.nome, "jose"); // Copie a string para o array
    
    printf("%d\n", s.x); // Acessa o valor inteiro
    printf("%s\n", s.nome); // Acessa o nome
    
    return 0;
}



