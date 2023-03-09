#include "main.h"
int reverse(char *s, char *c, int i, int *j);

/**
 * is_palindrome - checks if a string reads the same forward as backward
 * Return: 1 if palindrome and 0 if not
 * @s: string argument
 */
int is_palindrome(char *s)
{
int j = 0;
if (*s == '\0')
return (1);
return (reverse(s, s, 0, &j));
}

/**
 * reverse - checks if a string reads the same forward as backward
 * Return: 1 if palindrome and 0 if not
 * @s: string argument
 * @c: pointer to a char, same as s
 * @i: integer
 * @j: pointer to an integer
 */
int reverse(char *s, char *c, int i, int *j)
{
int res;
  /* base case */
if (c[i] == '\0' && (s[*j] == c[i - 1]))
return (1);

res = reverse(s, c, i + 1, j);
if (s[(*j)++] != c[i])
{
return (0);
}
else if (res)
{
return (1);
}
return (res);
}
