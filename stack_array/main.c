#include <stdio.h>
#include "stack/stack.h"

int main() {  

    Stack s;
    stack_init(&s, 10);
    stack_push(&s, 30);
    stack_push(&s, 50);
    stack_push(&s, 70);

    int size = stack_size(&s);

    for(int i = 0; i < size; i++) {
        printf("%d \n", s.data[i]);
    }
    return 0;
}