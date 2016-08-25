#define INT_LIST_H_

typedef struct list_node {
  int value;

  struct list_node *previous;
  struct list_node *next;
} list_node;


typedef struct int_list {
  list_node *head;
  list_node *tail;
} int_list;


void list_init(int_list *list);

void add_empty_list(int_list *list, int number);

void add_end_list(int_list *list, int number);

void print_list(int_list *list);

void list_end(int_list *list);
