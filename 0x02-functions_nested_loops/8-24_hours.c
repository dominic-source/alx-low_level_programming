#include "main.h"

/**
 * jack_bauer - Print all the minute of the day
 * Description: A function that displays every minute a day
 * @void: no argument
 * Return: always 0
 */
void jack_bauer(void)
{
int hr = 23, min = 59;
int i = 0;

while (i <= hr)
{
int k = 0;
while (k <= min)
{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
_putchar(':');
_putchar('0' + (k / 10));
_putchar('0' + (k % 10));
_putchar('\n');
k++;
}
i++;
}
return;
}
