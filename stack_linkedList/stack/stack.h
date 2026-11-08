#include <stdbool.h>

typedef struct node {
    int val;
    struct node* next;
} Node;

typedef struct stack {
    struct node* top;
    int size;
} Stack;

void CreateStack(Stack* stack);
void ClearStack(Stack* stack);
void Push(Stack* stack, int value);
bool IsEmpty(Stack* stack);
int StackSize(Stack* stack);
void Pop(Stack* stack, int* value);
void Top(Stack* stack, int* value);
void TraverseStack(Stack* stack, void (*func)(int));