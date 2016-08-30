#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "int_list.h"
#include "sort.h"

/* Escreva um programa que ordene uma lista de inteiros. A ordem de ordenação, bem como os inteiros a serem ordenados,
deverão ser informados como parâmetros da linha de comando. Na ausência de uma switch (opção), a ordem deverá ser
crescente; caso o usuário indique a opção -d, a ordem deverá ser crescente e, se indicar -r, a ordem deverá ser
decrescente. */

#define ASCENDING 0
#define DESCENDING 1

int main(int argc, char *argv[]) {
  int number, position;
  int sort;

  int_list *list = (int_list *) malloc(sizeof(int_list));
  list_node *node = (list_node *) malloc(sizeof(list_node));

  list->head = node;
  list_init(list);

  if(strcmp(argv[1], "-d") == 0) {
    sort = ASCENDING;
    position = 2;
  }

  else if(strcmp(argv[1], "-r") == 0) {
    sort = DESCENDING;
    position = 2;
  }

  else {
    sort = ASCENDING;
    position = 1;
  }

  for(int i = position; i < argc; i++) {
    number = atoi(argv[i]);

    if(list->head == NULL) {
      add_empty_list(list, number);
    }

    else {
      add_end_list(list, number);
    }
  }

  switch(sort) {

    case ASCENDING:
      ascending_sort(list);
    break;

    case DESCENDING:
      printf("TODO: Descending sort\n");
    break;
  }

  print_list(list);
  list_end(list);

  return 0;
}
