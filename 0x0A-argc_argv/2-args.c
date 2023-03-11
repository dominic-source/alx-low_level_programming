#include <stdio.h>

/**
 * main - print all argument it recieves
 * Return: always 0
 * @argc: count of argument
 * @argv: array of argument(s)
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
