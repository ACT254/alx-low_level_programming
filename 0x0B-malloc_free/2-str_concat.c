#include <stdlib.h>

/**
  * str_concat - concatenates two strings and returns pointer to new location
  * @s1: pointer to the first string
  * @s2: the pointer to the second string
  *
  * Return: the pointer to the combined string
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;

	while (s1[i] != NULL)
	{
		i++;
	}

	while (s2[j] != NULL)
	{
		j++;
	}
	ptr = malloc((i + j + 1) * sizeof(char));

	for (int k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (int m = 0; m < j; m++)
	{
		ptr[i + m] = s2[m];
	}

	/* add the null terminator */
	ptr[i + j + 1] = '\0';

	/* control flow for the output */

	return (ptr);
}


