#include "main.h"

/**
 * print_alphabet_x10 - prints lowers case alphabets
 * Description: displays lowercase alphabets
 * Return: 0
 */
void print_alphabet_x10(void)
{
int j = 0;
char letter = 'a';

while (j < 10)
{
int i = 0;

while (i < 26)
{
_putchar(letter + i);
i++;
}
_putchar('\n');
j++;
}
return;
}
