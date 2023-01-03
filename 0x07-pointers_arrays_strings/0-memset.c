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
	int i = 0;
	char **m, *t;

	t = s;
	while (i <= (n - 1))
	{
		*t = b;
		t++;
		i++;
	}

	m = &s;

	return (m);
}

