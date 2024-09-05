#include "stack.h"

void createStack(Stack *_stack){
    _stack->top = -1;
}

void push(Stack *_stack, int value){
    if(isFull(_stack)){
        printf("\033[0;31mCannot push %d Stack is FULL\033[0m\n", value);
        return;
    }
    _stack->arr[++(_stack->top)] = value;
}

int pop(Stack *_stack){
    if(isEmpty(_stack)){
        printf("\033[0;31mCannot pop Stack is EMPTY\033[0m\n");
        return -1;
    }
    return _stack->arr[(_stack->top)--];
}

int top(Stack *_stack){
    if(isEmpty(_stack)){
        printf("\033[0;31mNo elements to show Stack is EMPTY\033[0m\n");
        return -1;
    }
    return _stack->arr[(_stack->top)];
}

void destroyStack(Stack *_stack){
    _stack->top = -1;
    printf("\033[0;33mStack destroyed\033[0m\n");
}

void copyStack(Stack *src, Stack *dest) {
    dest->top = src->top;
    for (uint32_t i = 0; i <= src->top ; i++) {
        dest->arr[i] = src->arr[i];
    }
    printf("\033[0;34mStack copied successfully.\033[0m\n");
}

int stackSize(Stack *_stack){
    return (_stack->top + 1);
}

int isEmpty(Stack *_stack) {
    return _stack->top == -1;
}

int isFull(Stack *_stack) {
    return _stack->top == MAX_SIZE - 1;
}
