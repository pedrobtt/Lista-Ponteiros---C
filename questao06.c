/* 6. Assumindo que um inteiro tem 4 bytes de tamanho, qual será a saída do seguinte programa?
Justifique sua resposta */

#include <stdio.h>

void funcao(char **p){
  char *t;
  t = (p += sizeof(int))[-1];
  printf("%s\n", t);
}

int main(){
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"}; 
  funcao(a); // Retorna "gh" pois a função retorna o caractere que representa o tamanho de bytes (4)
  return 0;
}
