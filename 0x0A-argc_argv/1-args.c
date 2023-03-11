#include <stdio.h>

/**
 * main - print the number of argument
 * Return: 0
 * @argc: count of argument
 * @argv: array of argument
 */
int main(int argc, char *argv[])
{
if (argv[0])
printf("%i\n", argc - 1);

return (0);
}
