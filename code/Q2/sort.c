#include <stdio.h>
#include <stdlib.h>
#include "int_list.h"
#include "sort.h"

void ascending_sort(int_list *list) {
  list_node *node = list->head;
  list_node *next_node = node->next;

  int aux_element;

  while(next_node != NULL){
    while(next_node != node){
      if(next_node->value < node->value){
        aux_element = node->value;
        node->value = next_node->value;
        next_node->value = aux_element;
      }

      node = node->next;
    }

    node = list->head;
    next_node = next_node->next;
  }
}
