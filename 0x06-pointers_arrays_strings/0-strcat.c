#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: the destination string
  * @src: pointer to the  string to be appended at the end of dest
  *
  * Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	/* determining the end of the first string */

	while (*dest != '\0')
	{
		dest++;
	}

	/* concatenating the second string */

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* adding the null terminator */
	*end = '\0';

	return (dest);
}
