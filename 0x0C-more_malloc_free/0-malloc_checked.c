#include <stdlib.h>
#include "main.h"
/**
  * malloc_checked - allocates memory and gives the pointer
  * @b: the size of the memory to be allocated
  * Return: a pointer to allocated memory or 98 if malloc fails
  */

void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b * sizeof(char));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
