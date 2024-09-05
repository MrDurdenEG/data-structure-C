
#ifndef STACK_H_
#define STACK_H_

#include <stdint.h>
#define MAX_SIZE 100
typedef struct{
    int arr[MAX_SIZE];
    int top;
}Stack;

void createStack(Stack *_stack);
void push(Stack *_stack, int value);
int pop(Stack *_stack);
int top(Stack *_stack);
void copyStack(Stack *src, Stack *dest);
void destroyStack(Stack *_stack);
int stackSize(Stack *_stack);
int isEmpty(Stack *_stack);
int isFull(Stack *_stack);
#endif // STACK_H_
