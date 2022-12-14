#include "main.h"
/**
 * _islower - checks whether a given character is in the lower case
 * @c: The character to be checked
 *
 * Return: return 1 if it is lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


