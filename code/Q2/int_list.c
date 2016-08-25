#include <stdio.h>
#include <stdlib.h>
#include "int_list.h"

void list_init(int_list *list) {
  list->head = NULL;
  list->tail = NULL;
}

void add_empty_list(int_list *list, int number) {
  list_node *new_element = (list_node *) malloc(sizeof(list_node));

  new_element->value = number;
  new_element->previous = NULL;
  new_element->next = NULL;

  list->head = new_element;
  list->tail = new_element;
}

void add_end_list(int_list *list, int number) {
  list_node *new_element = (list_node *) malloc(sizeof(list_node));

  new_element->value = number;

  new_element->previous = list->tail;
  list->tail->next = new_element;
  new_element->next = NULL;

  list->tail = new_element;
}

void print_list(int_list *list) {
  list_node *node = list->head;

  if(list->head->next == NULL) {
    printf("{ %d }", node->value);
  }

  else {
    printf("{ ");

    while(node != list->tail) {
      printf("%d ", node->value);

      node = node->next;
    }
    printf("%d }\n", node->value);
  }
}

void list_end(int_list *list) {
  list_node *node = list->head->next;

  while(node != NULL) {
    free(node->previous);

    node = node->next;
  }

  free(node);
}
