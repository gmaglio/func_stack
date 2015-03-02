#include <stdlib.h>
#include "func_stack.h"

void push_func( glm_func_stack **func_stack, float (*func)(float,float) ) {
    glm_func_stack *new_top = malloc(sizeof(glm_func_stack));  ;
    new_top->next = *func_stack;
    new_top->func = func;
    *func_stack = new_top;
}

float (*top_func( glm_func_stack *func_stack ))(float,float) {
    return func_stack->func;
}

float (*pop_func( glm_func_stack **func_stack ))(float,float) {
    float (*local_func)(float,float) = (*func_stack)->func;
    glm_func_stack *old_top = *func_stack;
    *func_stack = (*func_stack)->next;
    free(old_top);
    return local_func;
}
