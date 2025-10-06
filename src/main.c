#include <stdio.h>
#include "./utility/structures/list.h"
#include "./utility/algorithms/sort.h"
int main() {
    List* test_list = new_list();
    append_int(test_list, 5);
    append_int(test_list, 3);
    append_int(test_list, 8);
    print_list(test_list);
    free_list(test_list);
    //print_list(test_list);
    return 0;
}