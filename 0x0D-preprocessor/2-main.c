#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _putchar(char c);
/**
 * main - print file name
 * Return: always 0
 * @void: No argument required
 */
int main(void)
{
size_t i;

for (i = 0; i < strlen(__FILE__); i++)
_putchar(__FILE__[i]);
_putchar('\n');
return (0);
}
