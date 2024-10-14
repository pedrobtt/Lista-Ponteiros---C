
// (E)

void f(int n) {
    char *m = malloc(10);
    char *n = malloc(10);
    free(m);
    m = n;
    free(m);
    free(n);
}

/* Ocorre o vazamentod de memória pois m recebe n indevidamente, fazendo com que 
ambos apontem para um mesmo endereço sem liberar a memória alocada de n antes */

/* Portanto o correto seria liberar m e n seguidamente:
free(m);
free(n); */