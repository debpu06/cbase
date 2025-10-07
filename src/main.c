#include <stdio.h>
#include "./utility/structures/list.h"
#include "./utility/algorithms/sort.h"
#include "./utility/structures/stack.h"
int main() {
    List* test_list = new_list();
    append_int(test_list, 5);
    append_int(test_list, 3);
    append_int(test_list, 8);
    print_list(test_list);
    free_list(test_list);


    Stack *stack = new_stack();
    push(stack, 1);
    push(stack, 3);
    push(stack, 5);
    printf("\n%d\n", pop(stack));
    printf("%d\n", pop(stack));
    printf("%d\n", pop(stack));
    return 0;
}