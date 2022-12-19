#include "main.h"

/**
  * rev_string - it reverses a string
  * @s: the string to be reversed
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	int k = n - 1;
	int j = 0;

	for (j = 0; j <= k; j++)
	{
		*(s + j) = *(s + k - j);
	}
}


