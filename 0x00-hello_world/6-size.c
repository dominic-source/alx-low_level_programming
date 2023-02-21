#include <stdio.h>

/**
 * main - print the sizes of various types on the computer
 * Description: A function that print the sizes of various types for 32
 * and/or 64 bits
 * @void: There are no argument for this function
 * Return: It returns zero after completion
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long));
printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0);
}
