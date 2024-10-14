

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



