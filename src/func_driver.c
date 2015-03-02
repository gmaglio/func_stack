#include <stdio.h>
#include <stdlib.h>
#include "func_stack.h"

float payload_0(float x, float y) {
    return x * y;
}

float payload_1(float x, float y) {
    return x / y;
}

float payload_2(float x, float y) {
    return (x * y) / x;
}

int main() {
    
    glm_func_stack *func_stack_a = malloc(sizeof(glm_func_stack));
    func_stack_a->next = NULL;
    push_func( &func_stack_a, &payload_0 );
    push_func( &func_stack_a, &payload_1 );
    push_func( &func_stack_a, &payload_2 );
    push_func( &func_stack_a, &payload_1 );
    printf("top: %f\n", top_func( func_stack_a )(8.0,7.0));
    printf("top: %f\n", top_func( func_stack_a )(8.0,7.0));
    printf("top: %f\n", top_func( func_stack_a )(8.0,7.0));
    printf("top: %f\n", top_func( func_stack_a )(8.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(8.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(8.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(8.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(8.0,7.0));

    return 0;

}
