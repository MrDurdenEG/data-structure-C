#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int main()
{

    Stack stack1;
    createStack(&stack1);
    char parentheses[100];
    printf("enter the parentheses : ");
    scanf("%s",&parentheses);
    for(int i =0 ;i<strlen(parentheses) ;i++){
        if (parentheses[i] == '(' || parentheses[i]  == '[' || parentheses[i]  == '{' || parentheses[i]  == '<')
            {
                push(&stack1,parentheses[i]);
            }
            else if (!isEmpty(&stack1) && ((top(&stack1) == '[' && parentheses[i]  == ']') || (top(&stack1) == '(' && parentheses[i]  == ')') || (top(&stack1) == '{' && parentheses[i]  == '}') || (top(&stack1) == '<' && parentheses[i]  == '>')))
            {
               pop(&stack1);
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        if (isEmpty(&stack1))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    return 0;
}
