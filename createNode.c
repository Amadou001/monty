#include "monty.h"
/**
 * nodeCreation - creates a new node
 * @head: head of the stack
 * @data: value to store into the node
 * Return: the address of the new node
*/

stack_t *nodeCreation(stack_t **head, int data)
{
stack_t *newnode, *temp;
newnode = (stack_t *)malloc(sizeof(stack_t));
if (newnode == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
newnode->n = data;
if (*head == NULL)
{
newnode->prev = *head;
newnode->next = NULL;
*head = newnode;
return (newnode);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
newnode->prev = temp;
newnode->next = NULL;
temp->next = newnode;
return (newnode);
}
