#include "main.h"

/**
  * rev_string - it reverses a string
  * @s: the string to be reversed
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	int n, k, j, m;

	n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}


	k = (n - 1);

	for (j = 0; j <= k; j++)
	{
		m = k - j;
		*(s + j) = *(s + m);

	}
}


