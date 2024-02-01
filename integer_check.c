#include "monty.h"
/**
 * isInteger - checks wether the operand of push is an integer
 * @operand_str: operand of push opcode
 * Return: 1 if it is an integer or 0 otherwise
*/
int isInteger(char *operand_str)
{
while (*operand_str != '\0')
{
if (*operand_str == '.')
{
return (0);
}
operand_str++;
}
return (1);
}
