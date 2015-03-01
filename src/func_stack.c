#include <stdlib.h>
#include "func_stack.h"

void push_func( glm_func_stack *func_stack, float (*func)(float,float) ) {
    func_stack->func = func;
    func_stack->next = malloc(sizeof(glm_func_stack));
    func_stack = func_stack->next;
}

float (*top_func( glm_func_stack *func_stack ))(float,float) {
    return func_stack->func;
}

float (*pop_func( glm_func_stack *func_stack ))(float a,float b) {
    float (*local_func( glm_func_stack *s))(float, float) { return func_stack->func; }
    glm_func_stack *new_top;
    new_top = func_stack->next;
    free(func_stack);
    return local_func(func_stack); 
}
