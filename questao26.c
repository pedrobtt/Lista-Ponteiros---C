/* 26. (ENADE, 2023) Na programação de sistemas embarcados, algumas posições de memória servem
para diferentes propósitos, não apenas para armazenar valores. Em algumas dessas memórias,
cada um os bits possui um significado diferente, sendo necessário manipulá-los
individualmente ou em pequenos grupos. Por isso, o conhecimento da álgebra booliana, bem
como dos operadores tilizados para realizar operações binárias nas linguagens de programação,
é essencial para o desenvolvimento desse tipo de sistema. A partir dessas informações, observe
o código apresentado a seguir, escrito na linguagem C, que faz uso de operações binárias sobre
variáveis inteiras.

#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  while (a) {
  x = x | b;
  y = y ^ a;
  z = z & (a+b);
  a = a >> 1;
  b = b << 1;
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}

Após a chamada desse programa, caso o usuário entre com os valores 10 e 1, nessa ordem, qual
será, exatamente, o valor da saída do programa? Explique, PASSO-A-PASSO, os cálculos
realizados pelo programa para chegar a esse resultado */



/*
Entrada:
a = 10 (em binário: 1010)
b = 1 (em binário: 0001)

Variáveis: 
x = a → x = 10 (1010)
y = b → y = 1 (0001)
z = a + b → z = 10 + 1 = 11 (1011)

while(a): o loop permanece equanto a for diferente de zero

1. Iteração: 

x = x | b → x = 10 | 1 = 11 (1010 | 0001 = 1011)
y = y ^ a → y = 1 ^ 10 = 11 (0001 ^ 1010 = 1011)
z = z & (a + b) → z = 11 & (10 + 1) = 11 & 11 = 11 (1011 & 1011 = 1011)
a = a >> 1 → a = 10 >> 1 = 5 (1010 >> 1 = 0101)
b = b << 1 → b = 1 << 1 = 2 (0001 << 1 = 0010)


2. Iteração:

x = x | b → x = 11 | 2 = 11 (1011 | 0010 = 1011)
y = y ^ a → y = 11 ^ 5 = 14 (1011 ^ 0101 = 1110)
z = z & (a + b) → z = 11 & (5 + 2) = 11 & 7 = 3 (1011 & 0111 = 0011)
a = a >> 1 → a = 5 >> 1 = 2 (0101 >> 1 = 0010)
b = b << 1 → b = 2 << 1 = 4 (0010 << 1 = 0100)


3. Iteração:

x = x | b → x = 11 | 4 = 15 (1011 | 0100 = 1111)
y = y ^ a → y = 14 ^ 2 = 12 (1110 ^ 0010 = 1100)
z = z & (a + b) → z = 3 & (2 + 4) = 3 & 6 = 2 (0011 & 0110 = 0010)
a = a >> 1 → a = 2 >> 1 = 1 (0010 >> 1 = 0001)
b = b << 1 → b = 4 << 1 = 8 (0100 << 1 = 1000)

  
4. Iteração:

x = x | b → x = 15 | 8 = 15 (1111 | 1000 = 1111)
y = y ^ a → y = 12 ^ 1 = 13 (1100 ^ 0001 = 1101)
z = z & (a + b) → z = 2 & (1 + 8) = 2 & 9 = 0 (0010 & 1001 = 0000)
a = a >> 1 → a = 1 >> 1 = 0 (0001 >> 1 = 0000)
b = b << 1 → b = 8 << 1 = 16 (1000 << 1 = 10000)

while(a): loop finalizado pois a agora é 0
*/
