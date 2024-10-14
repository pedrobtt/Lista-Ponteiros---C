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
  strcpy(str, "Agostinho"); // a string não condiz com o que se pede
  funcao(&str);
  puts(str);
  free(str);
  return 0;
}
