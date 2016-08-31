#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreva um programa em C que possua, como variáveis, os seguintes itens:
   -> double number1 = 7.3, number2; char s1[100], s2[100];

◦ Declare a variável dPtr como ponteiro para a variável do tipo double.
◦ Carregue o endereço da variável number1 no ponteiro dPtr.
◦ Imprima em tela o valor da variável apontada por dPtr partindo do ponteiro.
◦ Carregue o valor da variável apontada por dPrt na variável number2 .
◦ Imprima o valor armazenado em number2.
◦ Imprima o endereço de number1 na tela.
◦ Imprima o endereço armazenado em dPtr na tela .
◦ O valor impresso decorrente do enunciado que contempla o item anterior é igual ao valor do endereço gravado em dPrt?

◦ Leia uma string e a armazene no array s1. Copie a string armazenada em s1 para s2.
  Compare a string armazenada em s1 com a string armazenada em s2 e imprima o resultado na tela.
◦ Apense a string s2 à string s1. Imprima o resultado na tela.
◦ A execução do item anterior pode provocar algum erro em tempo de execução?
◦ Determine o comprimento da string armazenada em s1 e imprima o resultado na tela. */

int main() {
  double number1 = 7.3, number2;
  double *dPtr;
  char s1[100], s2[100];
  int string_cmp, string_lenght;

  printf("\n## Brincando com numeros e ponteiros...\n");
  dPtr = &number1;
  printf("* Valor da variavel number1: %.2f\n", *dPtr);

  number2 = *dPtr;
  printf("* Valor da variavel number2: %.2f\n", number2);

  printf("\n* Valor do endereco de number1: %p\n", &number1);
  printf("* Valor do endereco de dPtr: %p\n", dPtr);

  printf("\n## Brincando com strings...\n");
  printf("Digite uma palavra qualquer: ");
  scanf ( "%[^\n]", s1);

  strcpy(s2,s1);
  string_cmp = strcmp(s1, s2);
  if(string_cmp < 0 || string_cmp > 0) {
      printf("\nS1 [%s] é diferente de S2 [%s].\n", s1, s2);
   }

   else {
      printf("\nS1 [%s] é igual a S2 [%s].\n", s1, s2);
   }

   strcat(s1, s2);
   printf("Apos concatenar ambas as palavras, temos: %s\n", s1);
   string_lenght = strlen(s1);
   printf("A palavra [%s] possui o comprimento: %d\n\n", s1, string_lenght);

  return 0;
}
