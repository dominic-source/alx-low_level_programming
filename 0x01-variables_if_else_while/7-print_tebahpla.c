#include <stdio.h>
#include <stdlib.h>

/**
 * main - display alphabets in reverse order
 * Descripton: Print alphabets in reverse order using putchar
 * Return: Return 0 after completion
 */
int main(void)
{
char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
int count = 27;
int i;

for (i = 0; i < count; i++)
{
putchar(alphabets[26 - i]);
}
putchar('\n');
return (0);
}
