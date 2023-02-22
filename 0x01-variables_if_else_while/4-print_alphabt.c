#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays all alphabets except 'q' and 'e'
 * Description: main will display alphabets in lowercase letter
 * Return: returns 0
 */
int main(void)
{
char letters[] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
if (letters[i] != 'q' && letters[i] != 'e')
{
putchar(letters[i]);
}
}
putchar('\n');
return (0);
}
