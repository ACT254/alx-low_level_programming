#include "main.h"

/**
  * _strlen - checking the string length
  * @s: the string to be checked
  *
  * Return: returns the length of the string
  */

int _strlen(char *s)
{
	int n = 0;
	int len = 0;

	while (*s[n] != '\0')
	{
		n += 1;
		len += 1;
	}

	return (len);
}
