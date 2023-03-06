#include "main.h"

/**
 * _atoi - converts a string to integer
 * Return: non zero integer or zero
 * @s: a pointer to char
 */
int _atoi(char *s)
{
  int i = 0;
  int j;
  int *m = &j;
  int k = 0;
  while (i > -1)
    {
     
      if(*(s + i) > 47 && *(s + i) < 58)
	{
	  k++;
	  *(m + k) = *(s + i);
	  i++;
	  if(*(s + i + 1) > 47 && *(s + i + 1) < 58){
	    return (*m);
	  }
	}
      else if(*(s + i) == '-')
	{
	 *m *= -1; 
	 i++;
	}
      else if (*(s + i) == '+')
	{
	 *m *= 1;
	 i++;
	}
      else if (*(s + i) == '\0')
	{

	  printf("My integer is: %i", *m);
  return (0);
	}
    }

}
