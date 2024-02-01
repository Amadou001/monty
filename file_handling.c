#include "monty.h"
/**
 * file_handling - handles the argument file
 * @file_name: pointer to the name of the file
*/
void file_handling(const char *file_name)
{
char line[MAX_BUFFER_SIZE];
unsigned int line_number = 0;
FILE *file;
file = fopen(file_name, "r");
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", file_name);
exit(EXIT_FAILURE);
}
while (fgets(line, sizeof(line), file) != NULL)
{
line_number++;
interpret(line, line_number);
}
fclose(file);
}
