#include "main.h"

/**
 * main - prints out _putchar
 * Description: Display _putchar to the standard output
 * Return: 0
 */
int main(void)
{
char str[] = "_putchar";
int i = 0;

while (i < 8)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return (0);
}
