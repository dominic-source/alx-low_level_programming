#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - that concatenates all the arguments of program
 * Return: pointer to a char
 * @ac: argument count
 * @av: argument array
 */
char *argstostr(int ac, char **av)
{
int l;
char *new_str;
size_t len = 0, m;
int val;

if (ac == 0 || av == NULL)
return (NULL);

if (ac == 1)
val = 1;
else
val = (ac - 1) * (ac - 1) - 4;

new_str = malloc(sizeof(char) * val);
if (new_str == NULL)
return (NULL);

for (l = 0; l < ac; l++)
{
for (m = 0; m < strlen(av[l]); m++)
new_str[len++] = av[l][m];
new_str[len++] = '\n';
}
return (new_str);
}
