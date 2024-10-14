#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int *)malloc(10 * sizeof(int)); // Aloca memória para 10 inteiros
    
    // Faz algo com o array
    for (int i = 0; i < 10; i++) {
        array[i] = i * 2;
        printf("%d ", array[i]);
    }
    
    // Aqui, esquecemos de liberar a memória alocada
    // free(array); // Linha faltante que causaria o leak
    // Portanto, memory leak ocorre quando a memória não é liberada

    return 0;
}
