#include <stdlib.h>

/**
  * _strdup - gives a pointer to the duplicate of the string
  * @str: the pointer to the string to be duplicated
  *
  * Return: a pointer to the duplicate string
  */

char *_strdup(char *str)
{
	int j;
	int n = 0;
	char *ptr;
	void *x = NULL;

	while (str[n] != '\0')
	{
		n++;
	}

	ptr = malloc((n + 1) * sizeof(char));

	if (str == NULL)
	{
		return (x);
	}
	else if (ptr == NULL)
	{
		return (0);
	}

	for (j = 0; j <= n; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
