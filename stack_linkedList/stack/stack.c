#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void CreateStack(Stack* stack)
{
    stack->top = NULL;
    stack->size = 0;
}

bool IsEmpty(Stack* stack)
{
    return stack->top == NULL;
}

void Push(Stack* stack, int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = value;
    newNode->next = stack->top;
    stack->top = newNode;
    stack->size++;
}

void Pop(Stack* stack, int* value)
{
    if (IsEmpty(stack))
    {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }
    Node* temp = stack->top;
    *value = temp->val;
    stack->top = temp->next;
    free(temp);
    stack->size--;
}

int StackSize(Stack* stack)
{
    return stack->size;
}


void Top(Stack* stack, int* value)
{
    if (IsEmpty(stack))
    {
        printf("Stack is empty. Cannot retrieve top element.\n");
        return;
    }
    *value = stack->top->val;
}

void ClearStack(Stack* stack)
{
    while (stack->top != NULL)
    {
        Node* temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
    }
    stack->size = 0;
}

void TraverseStack(Stack* stack, void (*func)(int))
{
    for(Node* current = stack->top; current; current = current->next)
    {
        (*func)(current->val);
    }
}