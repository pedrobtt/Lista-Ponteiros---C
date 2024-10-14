float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value; // Válido: recebe 2.2 no array de posição [2]
scanf("%f", &aloha); // Inválido: &aloha não é endereço do array, o correto seria &aloha[i]
aloha = "value"; // Inválido: não é possível atribuir uma string para um array
printf("%f", aloha); // Inválido: não é possível printar o array sem especificá-lo
coisas[4][4] = aloha[3]; // Válido: é possível pois ambos são do mesmo tipo float
coisas[5] = aloha; // Inválido: sem especificar aloha, precisaria de um memcpy
pf = value; // Inválido: para obter o endereço de value -> &value
pf = aloha; // Válido: primeiro elemento do array apontado por pf