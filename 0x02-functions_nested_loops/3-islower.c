#include "main.h"

/**
  * _islower - checks whether a character is is lower case
  * @c: the character to be checked
  *
  * Return: 1 if lower case and 0 if not lowercase
  */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

