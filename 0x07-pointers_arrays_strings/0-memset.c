#include "main.h"

/**
  * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
  * s: a pointer to character
  * @b: the constant byte
  * @n: an integer n
  *
  * Return: a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char **m;

	while (i <= (n -1))
	{
		*(s + i) = b;
		i++;
	}

	m = &s;

	return (m);
}

