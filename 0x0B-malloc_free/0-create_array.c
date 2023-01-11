#include <stdlib.h>

/**
  * create_array - creates an array and gives the initial character
  * @size: the size of the array
  * @c: the character for initialization
  *
  * Return: pointer to array or NULL is allocation not successful
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
