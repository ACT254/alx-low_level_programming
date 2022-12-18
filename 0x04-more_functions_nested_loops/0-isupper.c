#include "main.h"

/**
  * _isupper - checks is a character is uppercase
  * @c: The character to be checked
  *
  *Return: 1 if upper 0 otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
