#include "monty.h"
#include "extern.h"
/**
 * f_mul - multiplies the second top element of
 * the stack with the top element of the stack.
 * @head: pointer to the stack
 * @line_number: line number inside the file
*/
void f_mul(stack_t **head, unsigned int line_number)
{
stack_t *temp;
int n = 0;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't mul, stack too short", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp->next != NULL)
{
n++;
temp = temp->next;
}
if (n < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short", line_number);
exit(EXIT_FAILURE);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->prev->n *= temp->n;
temp->prev->next = NULL;
top_of_stack = temp->prev;
free(temp);
}
