#include <stdio.h>
#include <stdlib.h>

/**
 * main - display all alphabets in lowercase
 * Description: a Function to display all alphabets in lowercase letters
 * Return: returns a value 0
 */
int main(void)
{
char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(alphabets[i]);
}
putchar('\n');
return (0);
}
