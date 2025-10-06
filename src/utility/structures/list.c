#include "list.h"
#include <stdlib.h>
#include <stdio.h>



List* new_list() {
    struct list *list = malloc(sizeof(struct list));
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
    return list;
}

void free_list(List *list) {
    Node *current = list->head;
    while(current != NULL) {
        Node *next = current->next;
        free(current);
        current = next;
    }
    free(list);
}

Node *new_node(int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

void append_int(List *list, int value) {
   Node *node = new_node(value);

   if (list->head == NULL) {
        list->head = node;
        list->tail = node;
   }
   else {
        list->tail->next = node;
        list->tail = node;
   }
}

void print_list(List *list) {
    Node *current_node = list->head;
    while (current_node != NULL) {
        printf("%d, ", current_node->value);
        current_node = current_node->next;
    }
}

