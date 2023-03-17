#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char **create_mem(char *str, int *count, int *count_str);
/**
 * strtow - function that splits a string into words
 * @str: a pointer to char
 * Return: pointer to a pointer to a char
 */
char **strtow(char *str)
{
char **words;
int i = 0, m = 0, count = 0, count_n, count_str = 0;
if (str == NULL || *str == '\0')
return (NULL);

words = create_mem(str, &count, &count_str);

i = 0;
count_n = count;
count = 0;
while (str[i] != '\0')
{
if (str[i] == ' ')
i++;
else if (str[i] != ' ' && str[i + 1] != ' ')
{
if (count <= count_n)
words[count][m] = str[i];
m++;
i++;
}
else if (str[i] != ' ' && str[i + 1] == ' ')
{
if (count < count_n)
{
words[count][m++] = str[i];
m = 0;
}
count++;
i++;
}
}
words[count++] = '\0';
return (words);
}

/**
 * create_mem - function that splits a string into words
 * @str: a pointer to char
 * @count: pointer to count
 * @count_str: pointer to count_str
 * Return: pointer to a pointer to a char
 */
char **create_mem(char *str, int *count, int *count_str)
{
char **words;
int i = 0;
unsigned int malc = 1;

while (str[i] != '\0')
{
if (str[i] == ' ')
i++;
else if (str[i] != ' ' && str[i + 1] != ' ')
{
if (malc)
{
malc = 0;
++(*count);
}
i++;
}
else if (str[i] != ' ' && str[i + 1] == ' ')
{
malc = 1;
i++;
}
}

words = malloc(sizeof(*words) * (*count + 1));
if (words == NULL)
{
free(words);
return (NULL);
}

i = 0;
*count = -1;
malc = 1;
while (str[i] != '\0')
{
if (str[i] == ' ')
i++;
else if (str[i] != ' ' && str[i + 1] != ' ')
{
if (malc)
{
malc = 0;
++(*count);
}
i++;
++(*count_str);
}
else if (str[i] != ' ' && str[i + 1] == ' ')
{
malc = 1;
i++;
++(*count_str);
words[*count] = malloc(sizeof(**words) * (*count_str));
if (words[*count] == NULL)
{
free(words[*count]);
for (i = 0; i < *count; i++)
free(words[i]);
return (NULL);
}
}
}
return (words);
}
