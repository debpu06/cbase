#ifndef LIST_H
#define LIST_H
#include <stdlib.h>


typedef struct node {
    struct node *next;
    int value;
} Node;

typedef struct list {
    Node *head;
    Node *tail;
    size_t length;

} List;

List * new_list();

void free_list(List *list);

void append_int(List *list, int value);

void print_list(List *list);

#endif

