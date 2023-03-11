#include <stdio.h>
#include <stdlib.h>

/**
 * main - add all positive numbers that are in the argument
 * Return: 0 or 1
 * @argc: counts of argument(s)
 * @argv: array of argument(s)
 */
int main(int argc, char **argv)
{
int i;
int value = 0;
if (argc == 1)
printf("0\n");
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) != 0 || *argv[i] == '0')
{
value += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%i\n", value);
}
return (0);
}
