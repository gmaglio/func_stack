#include <stdlib.h>
#include "func_stack.h"

void push_func( glm_func_stack *func_stack, int (*func)(int,int) ) {
    func_stack->func = func;
    func_stack->next = malloc(sizeof(glm_func_stack));
}

int (*top_func( glm_func_stack *func_stack ))(int,int) {
    return func_stack->func;
}
