/* 10. O que fazem os seguintes programas em C? 

#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }
}

#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}

*/

#include <stdio.h>

int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }
  // %d Imprime os valores dos elementos do array
  // %X Imprime os endereço de memória hexadecimal do array
}
