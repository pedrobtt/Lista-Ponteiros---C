#include <stdio.h>

char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
// a[0] = "AGOSTINHO" , a[1] = "MEDEIROS" ...

char **b[] = {a + 3, a + 2, a + 1, a};
// b[0] = a + 3 = "JUNIOR" , b[1] = a + 2 = "BRITO" ...

char ***c = b;
/* c é ponteiro para ponteiro de ponteiros, portanto c 
recebe o valor de b */

int main() {
    
  printf("%s ", **++c); 
  /* ++c avança b para b[1] = a + 2, **c desreferencia 
  2 vezes, resultando em *a[2] = "BRITO" */
  
  printf("%s ", *--*++c + 3);
  /* ++c avança para b[2] = a + 1, *++c desreferencia 
  a[1] = "MEDEIROS", --*++c volta para a[0] = "AGOSTINHO",
  *--*++c + 3 acessa o endereço a partir do terceiro 
  caractere de "AGOSTINHO", que é "STINHO".*/
  printf("%s ", *c[-2] + 3);
  /* c[-2] acessa b[0] (que é a + 3, apontando para "JUNIOR").
  *c[-2] + 3 acessa a string a partir do terceiro caractere 
  de "JUNIOR", que é "IOR". */
  
  printf("%s ", c[-1][-1] + 1);
  /* c[-1] acessa b[1] (que é a + 2, apontando para "BRITO").
  c[-1][-1] acessa o primeiro caractere de "BRITO", que é "B".
  c[-1][-1] + 1 acessa a partir do segundo caractere de "BRITO",
  que é "RITO". */
  
  return 0;
}
