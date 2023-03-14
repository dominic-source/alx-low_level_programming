#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array and initialize it
 * @size: an unsigned int
 * @c: a char
 * Return: a pointer to a char
 */
char *create_array(unsigned int size, char c)
{
char *array_char;
unsigned int i;
if (size == 0)
return (NULL);
array_char = malloc(sizeof(char) * size);
if (array_char == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array_char[i] = c;
}
return (array_char);
}
