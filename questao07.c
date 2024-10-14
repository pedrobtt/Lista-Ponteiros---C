#include <stdlib.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i); // printa o valor do contador
  printf(" vet[%d] = %.1f",i, vet[i]); // printa o valor do vetor do contador
  printf(" *(f + %d) = %.1f",i, *(f+i)); // printa f + o valor do contador
  printf(" &vet[%d] = %X",i, &vet[i]); // printa o endereço do vetor do contador
  printf(" (f + %d) = %X",i, f+i); // printa o endereço de f + i que é igual a &vet[i]
  printf("\n");
  }
}
