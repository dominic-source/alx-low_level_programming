#include <stdio.h>
#include <stdlib.h>

/**
 * main - display all alphabets in lowercase
 * Description: a Function to display all alphabets in lowercase letters
 * Return: returns a value 0
 */
int main(void)
{
char lower_alphabets[] = "abcdefghijklmnopqrstuvwxyz";
char upper_alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
int j;

for (i = 0; i < 26; i++)
{
putchar(lower_alphabets[i]);
}
for (j = 0; j < 26; j++)
{
putchar(upper_alphabets[j]);
}
putchar('\n');
return (0);
}
