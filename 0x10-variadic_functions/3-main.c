#include "variadic_functions.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  print_all("ceisic", 'B', 3, "Charismatic", 44, 'C');
  print_all("ceisici", 'B', 3, "Charismatic", 44, 'C', 0);
  print_all("mnbvfqcepolsbxzi", 3.14435, 'H', "#Cisfun", 0);
  print_all(NULL);
    return (0);
}
