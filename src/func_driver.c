#include <stdio.h>
#include <stdlib.h>
#include "func_stack.h"

int payload(int x, int y) {
    return x * y;
}

int main() {
    
    glm_func_stack *func_stack_a = malloc(sizeof(glm_func_stack));
    push_func( func_stack_a, &payload );
    printf("%i\n", top_func( func_stack_a )(6,7));

    return 0;

}
