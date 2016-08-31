#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "int_list.h"
#include "sort.h"

#define ASCENDING 0
#define DESCENDING 1

int main(int argc, char *argv[]) {
  int number, position;
  int sort;

  int_list *list = (int_list *) malloc(sizeof(int_list));
  list_node *node = (list_node *) malloc(sizeof(list_node));

  list->head = node;
  list_init(list);

  if(argc == 1) {
    printf("[ERROR] Voce precisa adicionar a ordem de ordenação e/ou os numeros desejados.\n\n");
  }

  else {
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

    int i;
    for(i = position; i < argc; i++) {
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
        descending_sort(list);
      break;
    }

    print_list(list);
    list_end(list);
  }

  return 0;
}
