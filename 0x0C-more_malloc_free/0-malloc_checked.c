#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Function that allocates memory
 *
 * @b: parameter
 *
 * Return: Return the pointer
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(sizeof(char) * b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
