#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiply two positive numbers
 * @argv: array of numbers
 * @argc: count of argument
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
unsigned long result;
  if (argc != 3)
    {
      printf("Error\n");
      exit(98);
    }
  if(!(isdigit(*argv[1]) && isdigit(*argv[2])))
    {
      printf("Error\n");
      exit(98);
    }

result = atoi(argv[1]) * atoi(argv[2]);
printf("%lu\n", result);

return (0);
}
