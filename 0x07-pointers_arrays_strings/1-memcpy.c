#include "main.h"

/**
  * _memcpy - copy n bytes from src to dest
  * @dest: a pointer to the destination
  * @src: a pointer to the source
  * @n: number of bytes to be copied
  *
  * Return: a pointer to des
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++;)
	{
		*(dest + i) = *(src + i)
	}

	return (dest);
}


