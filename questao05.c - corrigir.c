/* 5. Um programador construiu o seguinte código e esperava na saída o texto gostinho, mas não
obteve essa saída. Justifique o porquê de não ter obtido o resultado esperado. */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char** str){
  str++;
}

int main(){
  char *str = (void *)malloc(50*sizeof(char));
  strcpy(str, "Agostinho"); 
  funcao(&str);
  puts(str);
  free(str);
  return 0;
}

/*
A função "funcao! apenas incrementou uma cópia local do ponteiro str, mas não alterou a string
original. Para modificar o conteúdo da string, seria necessário passar str diretamente e usar
strcpy ou similar dentro da função
*/
