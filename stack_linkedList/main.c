#include <stdlib.h>
#include <stdio.h>
#include "stack/stack.h"

void MultiplyByTwo(int value) {
    printf("%d\n", value * 2);
}

int main() {
    Stack *s = (Stack*)malloc(sizeof(Stack));
    CreateStack(s);

    Push(s, 10);
    Push(s, 20);   
    Push(s, 30);

    int size = 0;
    size = StackSize(s);
    printf("Stack size: %d\n", size);

    int topValue;
    Top(s, &topValue);
    printf("Top value: %d\n", topValue);

    size = StackSize(s);
    printf("Stack size after pop: %d\n", size);


    TraverseStack(s, MultiplyByTwo);
    ClearStack(s);

    Top(s, &topValue);
    printf("Top value: %d\n", topValue);
    return 0;
}