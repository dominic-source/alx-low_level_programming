#include <stdio.h>
/**
 * main - multiply arguments
 * Return: Always 0
 * @argc: counts of argument
 * @argv: array of argument
 */
int main(int argc, char *argv[])
{
int i, j, k, m, sign1 = 1, sign2 = 1, value1_ = 0, value2_ = 0;
if (argc > 3 || argc == 1)
printf("Error\n");
else
{
for (i = 0; argv[1][i] != '\0'; i++)
{
if (argv[1][i] == '-')
sign1 = -1;
for (j = 0; j < 10; j++)
{
if (argv[1][i] == j + '0')
{
value1_ = value1_ * 10 + j;
break;
}
}
}
value1_ = (value1_ *sign1);
for (k = 0; argv[2][k] != '\0'; k++)
{
if (argv[2][k] == '-')
sign2 = -1;
for (m = 0; m < 10; m++)
{
if (argv[2][k] == m + '0')
{
value2_ = value2_ * 10 + m;
break;
}
}
}
value2_ = (value2_ *sign2);
printf("%i\n", (value1_ *value2_));
}
return (0);
}
