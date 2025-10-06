#include "stack.h"
#include <assert.h>

Stack * new_stack() {
    Stack *stack = malloc(sizeof(Stack));
    stack->top = NULL;
    stack->size = 0;
    return stack;
}

StackNode * new_stacknode(int value) {
    StackNode *node = malloc(sizeof(StackNode));
    node->value = value;
    return node;
}

void free_stack(Stack *stack) {
    StackNode *top = stack->top;
    while(top != NULL) {
        StackNode *temp = top->next;
        free(top);
        top = temp;
    }
    free(stack);
}

void push(Stack *stack, int value) {
    assert(stack != NULL);
    StackNode *node = new_stacknode(value);
    if (stack->top == NULL) {
        stack->top = node;
    }    
    else {
        node->next = stack->top;
        stack->top = node;
    }
    stack->size++;
}

int pop(Stack *stack) {
    assert(stack != NULL);
    assert(stack->size > 0);

    StackNode *top = stack->top;
    int value = top->value;
    stack->top = top->next;
    stack->size--;
    return value;
}