#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>


#include "stack.h"

void stack_init(Stack* stack, int size) {
    stack->length = size;
    stack->data = (char*)malloc(size * sizeof(char));
    stack->top = -1;
}

bool stack_is_full(Stack* stack) {
    return stack->top == stack->length - 1;
}

bool stack_is_empty(Stack* stack) {
    return stack->top == -1;
}

bool stack_push(Stack* stack, int value) {
    if (stack_is_full(stack)) {
        return false;
    }

    stack->data[++stack->top] = value;
    return true;
}

int stack_size(Stack* stack) {
    return stack->top + 1;
}

int stack_pop(Stack* stack) {
    if (stack_is_empty(stack)) {
        return -1; // Indicate that the stack is empty
    }

    return stack->data[stack->top--];
}

int stack_top(Stack* stack) {
    if (stack_is_empty(stack)) {
        return -1; // Indicate that the stack is empty
    }

    return stack->data[stack->top];
}