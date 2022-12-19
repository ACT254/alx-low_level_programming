#include "main.h"

/**
  * rev_string - it reverses a string
  * @s: the string to be reversed
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	int n, k, j;

	n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	char tmp[n];

	k = (n - 1);

	for (j = 0; j <= k; j++)
	{
		tmp[j] = *(s + (k - j));
		*(s + j) = tmp[j];
	}
}


