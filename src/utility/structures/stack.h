#ifndef STACK_H
#define STACK_H
#include <stdlib.h>

typedef struct structnode {
    struct structnode *next;
    int value;
} StackNode;

typedef struct stack {
    StackNode *top;
    int size;
} Stack;

int pop(Stack *stack);
void push(Stack *stack, int value);
Stack* new_stack();
void free_stack(Stack *stack);


#endif