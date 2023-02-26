#include "main.h"

/**
 * print_alphabet - prints lowers case alphabets
 * Description: displays lowercase alphabets
 * Return: 0 
 */
void print_alphabet(void)
{
int i = 0;
char letter = 'a';

while (i < 26)
{
_putchar(letter + i);
i++;
}
_putchar('\n');
return;
}
