#include <stdbool.h>

typedef struct {
    int top;
    int length;
    char *data;
} Stack;

void stack_init(Stack* stack, int size);
bool stack_is_full(Stack* stack);
bool stack_is_empty(Stack* stack);
bool stack_push(Stack* stack, int value);
int stack_size(Stack* stack);
int stack_pop(Stack* stack);
int stack_top(Stack* stack);
