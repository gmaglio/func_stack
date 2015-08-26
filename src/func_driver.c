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
    
    glm_func_stack *func_stack_a = NULL;
    push_func( &func_stack_a, &payload_0 );
    push_func( &func_stack_a, &payload_1 );
    push_func( &func_stack_a, &payload_2 );
    printf("pop: %f\n", pop_func( &func_stack_a )(8.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(8.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(8.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(10.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(24.0,7.0));
    printf("pop: %f\n", pop_func( &func_stack_a )(16.0,7.0));

    return 0;

}
