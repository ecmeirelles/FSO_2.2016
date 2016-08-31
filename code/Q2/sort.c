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

void descending_sort(int_list *list) {
  list_node *node = list->tail;
  list_node *previous_node = node->previous;

  int aux_element;

  while(previous_node != NULL){
    while(previous_node != node){
      if(previous_node->value < node->value){
        aux_element = node->value;
        node->value = previous_node->value;
        previous_node->value = aux_element;
      }

      node = node->previous;
    }

    node = list->tail;
    previous_node = previous_node->previous;
  }
}
