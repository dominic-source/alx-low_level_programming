#include <stdio.h>


/**
 * startup - print before main
 * Return: zero
 */
__attribute__((constructor))int startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
