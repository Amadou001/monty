#include "monty.h"
#include "extern.h"
/**
 * push - pushes the data inside the stack
 * @head: pointer to the stack
 * @operand: data to store
*/
stack_t *stack = NULL;
stack_t *top_of_stack = NULL;
void push(stack_t **head, unsigned int operand)
{
top_of_stack = nodeCreation(&stack, operand);
}
