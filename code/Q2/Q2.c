#include <stdio.h>
#include <stdlib.h>
#include "int_list.h"

/* Escreva um programa que ordene uma lista de inteiros. A ordem de ordenação, bem como os inteiros a serem ordenados,
deverão ser informados como parâmetros da linha de comando. Na ausência de uma switch (opção), a ordem deverá ser
crescente; caso o usuário indique a opção -d, a ordem deverá ser crescente e, se indicar -r, a ordem deverá ser
decrescente. */

int main(int argc, char *argv[]) {
  int number, option;
  int_list *list = (int_list *) malloc(sizeof(int_list));
  list_node *node = (list_node *) malloc(sizeof(list_node));

  list->head = node;

  list_init(list);

  for(int i = 1; i < argc; i++) {
    number = atoi(argv[i]);

    if(list->head == NULL) {
      add_empty_list(list, number);
    }

    else {
      add_end_list(list, number);
    }
  }

  print_list(list);
  list_end(list);

  return 0;
}
