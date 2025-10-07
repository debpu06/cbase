#include <stdio.h>
#include "./utility/structures/list.h"
#include "./utility/algorithms/sort.h"
#include "./utility/structures/stack.h"
#include "./utility/logging/log.h"

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

    int test_array[] = {3, 3, 1, 6, 5, 0, 8};
    quicksort(test_array, 0, 6);
    for(int i = 0; i < 7; i++){
        printf("%d\n", test_array[i]);
    }
    
    return 0;
}