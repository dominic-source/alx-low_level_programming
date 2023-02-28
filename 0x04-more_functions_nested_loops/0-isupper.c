/**
 * _isupper - checks for upper case character
 * Description: a function that returns 1 if upper case and 0 otherwise
 * @c: c is an integer argument
 * Return: either 1 or 0
 */
int _isupper(char c)
{
int i = 0;
while (i < 26)
{
if (c == 'A' + i)
{
return (1);
}
if (c == 'a' + i)
{
return (0);
}
i++;
}
return (0);
}
