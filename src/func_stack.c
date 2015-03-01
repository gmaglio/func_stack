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
    glm_func_stack *old_top = *func_stack;
    float local_func(float a,float b) { return -1; }
    if( *func_stack == NULL ) 
        return &local_func;
    else
        *func_stack = (*func_stack)->next;
    return (*func_stack)->func;
}
