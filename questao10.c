#include <stdio.h>

int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }
  // %d imprime os valores dos elementos do array
  // %X imprime os endereço de memória hexadecimal do array
  
}
