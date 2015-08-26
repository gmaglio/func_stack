#include <stdlib.h>
#include <stdio.h>
#include "func_stack.h"

// null value and function to support bottom of stack
float null_func(float x,float y) {
    return 2.55;
}

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
    float (*local_func)(float,float) = NULL;
    glm_func_stack *old_top = *func_stack;
    if( (*func_stack) == NULL ) {
	printf("At bottom of stack\n");
	local_func = &null_func;
	return local_func;
    }
    else {
        local_func = (*func_stack)->func;
        *func_stack = (*func_stack)->next;
        free(old_top);
        return local_func;
    }
}
