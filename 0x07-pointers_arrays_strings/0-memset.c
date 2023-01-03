#include "main.h"

/**
  * _memset - fill first n bytest with constant
  * @s: a pointer to character
  * @b: the constant byte
  * @n: an integer n
  *
  * Return: a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
