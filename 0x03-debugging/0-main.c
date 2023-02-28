#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;

i = 98;
printf("%i is %c\n", i, positive_or_negative(i));
return (0);
}
