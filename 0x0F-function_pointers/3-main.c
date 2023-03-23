#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: array of string arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int (*my_fun)(int, int);
int result;
char c;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
c = *argv[2];
if (!(c == '+' || c == '-' || c == '*' || c == '/' || c == '%'))
{

printf("Error\n");
exit(99);
}
if ((c  == '/' && *argv[3] == '0') || (c == '%' && *argv[3] == '0'))
{
printf("Error\n");
exit(100);
}
my_fun = get_op_func(argv[2]);
result = my_fun(atoi(argv[1]), atoi(argv[3]));

printf("%i\n", result);
return (0);
}
