#include <stddef.h>
#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name of person
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
char *n_name;
n_name = malloc(sizeof(char) * (strlen(name) + 1));
if (n_name == NULL)
return;

strcpy(n_name, name);
f(n_name);
free(n_name);
}
