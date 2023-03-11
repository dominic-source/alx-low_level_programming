#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add all positive numbers that are in the argument
 * Return: 0 or 1
 * @argc: counts of argument(s)
 * @argv: array of argument(s)
 */
int main(int argc, char *argv[])
{
int i, j;
int value = 0;

if (argc == 1)
printf("0\n");
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
value += atoi(argv[i]);
}
printf("%i\n", value);
}
return (0);
}
