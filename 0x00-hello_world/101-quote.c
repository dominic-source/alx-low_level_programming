#include <stdio.h>

/**
 * main - print a string in stderror output
 * Description: A function that will print a string in standard error
 * @void: main does not take any argument here
 * Return: main will return a value of 1
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

fprintf(stderr, "%s\n", str);
return (1);
}
