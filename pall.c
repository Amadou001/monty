#include "monty.h"
/**
 * pall - prints the content of the stacks from the top
 * @top: pointer to the top of the stack
*/
void pall(stack_t **top)
{
stack_t *temp;
if (*top == NULL)
{
return;
}
temp = *top;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->prev;
}
}
