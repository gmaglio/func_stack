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
    push_func( func_stack_a, &payload_0 );
    printf("%f\n", top_func( func_stack_a )(6.0,7.0));
    push_func( func_stack_a, &payload_1 );
    printf("%f\n", top_func( func_stack_a )(8.0,7.0));
    push_func( func_stack_a, &payload_2 );
    printf("%f\n", top_func( func_stack_a )(15.0,3.0));
    push_func( func_stack_a, &payload_1 );
    printf("%f\n", top_func( func_stack_a )(8.0,7.0));

    return 0;

}
