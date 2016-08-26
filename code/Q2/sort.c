#include <stdio.h>
#include <stdlib.h>
#include "int_list.h"

void ascending_sort(int_list *list) {
  int size = list->size;
  list_node *node = list->head;

  if(list->head->next != NULL) {
    while(node != NULL) {
      list_node *aux_element = (list_node *) malloc(sizeof(list_node));

      if(node->value > node->next->value) {
        aux_element->value = node->value;
        node->value = node->next->value;
        node->next->value = aux_element->value;

      }

      free(aux_element);
      node = node->next;
    }

    size--;

    if(size != 0) {
      ascending_sort(list);
    }
  }
}
