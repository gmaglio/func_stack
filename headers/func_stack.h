#ifndef FUNC_STACK_H
#define FUNC_STACK_H

typedef struct _func_stack {

    float (*func)(float,float);
    struct _func_stack *next;

} glm_func_stack;


void push_func( glm_func_stack **func_stack, float (*func)(float,float) );
float (*top_func( glm_func_stack *func_stack ))(float,float);
float (*pop_func( glm_func_stack **func_stack ))(float,float);

#endif
