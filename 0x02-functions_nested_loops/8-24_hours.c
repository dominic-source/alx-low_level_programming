#include "main.h"

/**
 * jack_bauer - Print all the minute of the day
 * Description: A function that displays every minute a day
 * @void: no argument
 * Return: always 0
 */
void jack_bauer(void)
{
int hr = 2, hrs = 3, min = 5, mins = 9;
int i = 0;

while (i <= hr)
{
int j = 0;
while (j <= hrs)
{
int k = 0;
while (k <= min)
{
int l = 0;
while (l <= mins)
{
_putchar('0' + i);
_putchar('0' + j);
_putchar(':');
_putchar('0' + k);
_putchar('0' + l);
_putchar('\n');
l++;
}
k++;
}
j++;
}
i++;
}
return;
}
