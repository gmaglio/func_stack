#ifndef FUNC_STACK_H
#define FUNC_STACK_H

typedef struct _func_stack {

    int (*func)(int,int);
    struct _func_stack *next;

} glm_func_stack;


void push_func( glm_func_stack *func_stack, int (*func)(int,int) );
int (*top_func( glm_func_stack *func_stack ))(int,int);

#endif
