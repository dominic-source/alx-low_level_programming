#include <stdio.h>

/**
 * main - print the fibonacci sequence
 * Description: print the first 50 fibonacce numbers
 * Return: void
 */
int main()
{
int i = 1;
int j = 2;
int count = 48;
int k = 0;
int m;
  
  printf("%i, %i", i, j); 
  while(k < count)
    {
      m = j + i;
      i = j;
      j = m;
      printf(", %i", j);
      k++;
    }
  printf("\n");
}
