#include <stdio.h>
#include <stdlib.h>
void change_cent(int *pnt_count, int *pnt_cent, int *pnt_tmp);
/**
 * main - print minimum number of change
 * Return: always zero
 * @argc: counts of argument
 * @argv: array of argument(s)
 */
int main(int argc, char *argv[])
{
int cent = atoi(argv[1]);
int count = 0;
int tmp;
int *pnt_count = &count;
int *pnt_cent = &cent;
int *pnt_tmp = &tmp;

if (!(argc == 2))
{
printf("Error\n");
return (1);
}
if (cent < 0)
{
printf("0\n");
}
else
{
change_cent(pnt_count, pnt_cent, pnt_tmp);
}
printf("%i\n", count);
return (0);
}
/**
 * change_cent - determine cent count
 * Return: always zero
 * @pnt_count: pointer to count
 * @pnt_cent: pointer to cent
 * @pnt_tmp: pointer to tmp
 */
void change_cent(int *pnt_count, int *pnt_cent, int *pnt_tmp)
{
if (*pnt_cent  > 25)
{
*pnt_count += *pnt_cent / 25;
*pnt_tmp = *pnt_cent % 25;
if (*pnt_tmp == 1 || *pnt_tmp == 2 || *pnt_tmp == 5 || *pnt_tmp == 10)
*pnt_count += 1;
else
*pnt_cent = *pnt_tmp;
}
if (*pnt_cent < 25 && *pnt_cent >= 10)
{
*pnt_count += *pnt_cent / 10;
*pnt_tmp = *pnt_cent % 10;
if (*pnt_tmp == 1 || *pnt_tmp == 2 || *pnt_tmp == 5)
*pnt_count += 1;
else
*pnt_cent = *pnt_tmp;
}
if (*pnt_cent < 10 && *pnt_cent >= 5)
{
*pnt_count += *pnt_cent / 5;
*pnt_tmp = *pnt_cent % 5;
if (*pnt_tmp == 1 || *pnt_tmp == 2)
*pnt_count += 1;
else
*pnt_cent = *pnt_tmp;
}
if (*pnt_cent < 5 && *pnt_cent >= 2)
{
*pnt_count += *pnt_cent / 2;
*pnt_tmp = *pnt_cent % 2;
if (*pnt_tmp == 1)
*pnt_count += 1;
else
*pnt_cent = *pnt_tmp;
}
}
