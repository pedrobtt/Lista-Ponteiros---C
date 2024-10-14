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
