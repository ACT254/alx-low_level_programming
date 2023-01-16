#include <stdlib.h>
/**
  * malloc_checked - allocates memory and gives the pointer
  * @b: the size of the memory to be allocated
  * Return: a pointer to allocated memory or 98 if malloc fails
  */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
