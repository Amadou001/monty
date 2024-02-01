#include "monty.h"
/**
 * main - executes the program
 * @ac: argument counter
 * @av: argument vector
 * Return: 0 on success
*/
int main(int ac, char **av)
{
if (ac == 1 || ac > 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file_handling(av[1]);
return (0);
}
